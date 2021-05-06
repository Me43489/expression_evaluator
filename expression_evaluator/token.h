#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "token.h"

typedef enum
{
	ERROR,
	WHITESPACE,
	LEFT_PAR,
	RIGHT_PAR,

	PLUS, MINUS,
	MUL, DIV,
	NUM
}Token_Type;

typedef struct
{
	char value;
	int pos;
	Token_Type type;
}Token;

struct Token_Vector
{
	int size;
	int count;
	Token* data;
	//void** data;
}typedef Token_Vector;

bool is_left_paren(char c);
bool is_right_paren(char c);

Token_Vector* Token_Vector_Create(int size);
void Token_Vector_Push_Back(Token_Vector* vector, Token token);
void Token_Vector_Pop_Back(Token_Vector* vector);
void Token_Vector_Resize(Token_Vector* vector, int size);
void Token_Vector_Insert(Token_Vector* vector, Token, int index);
void Token_Vector_Free(Token_Vector* vector);
int Token_Vector_Get_Size(Token_Vector* vector);





