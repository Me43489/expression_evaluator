#pragma once
#include <stdlib.h>
#include "token.h"

typedef enum {
	CONSTANT,
	UNARY,
	BINARY,
}Node_Type;

typedef struct 
{
	Node_Type Type;
	union 
	{
		int constant;
		Unary_Node unary;
		Binary_Node binary;
	};
} Node;

typedef enum 
{
	NEG,
	ABS,
}Unary_Type;

typedef struct 
{
	Unary_Type type;
	Node* root;
} Unary_Node;

typedef enum
{
	ADD,
	SUB,
	MUL,
	DIV,
}Binary_Kind;

typedef struct 
{
	Binary_Kind kind;
	Node* left;
	Node* right;
} Binary_Node;
