// expression_evaluator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "token.h"
#include "parse.h"


int main(int argc, char** argv)
{
	const char* input_stream = calloc(BUFSIZ, sizeof(const char));

	printf("enter expression:");
	fgets(input_stream, BUFSIZ, stdin);
	//scanf("%s", input_stream);
	Token* tokens = Tokenize(input_stream);
	
	//Create_Tree(tokens);
	
	//10 * 5(2+4)/2
//	free(input_stream);
	//free(tokens);
	
	/* vector = Vector_Create(0);
	Vector_Push_Back(vector, 'h');
	Vector_Push_Back(vector, 'e');
	Vector_Push_Back(vector, 'l');
	Vector_Push_Back(vector, 'l');
	Vector_Push_Back(vector, 'o');
	Vector_Push_Back(vector, 'z');
	Vector_Insert(vector, 'x', 3);
	//Vector_Resize(vector,10);

	for (int i = 0; i < vector->count; i++) {
		char x = Vector_Get_Element(vector, i);
		printf("%c\n", x);
	}
	Vector_Free(vector);
	*/
	return 0;
}
