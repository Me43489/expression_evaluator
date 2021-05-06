#include "token.h"

Token_Vector* Token_Vector_Create(int size)
{
	Token_Vector* vector = (Token_Vector*)calloc(1, sizeof(Token_Vector));
	vector->data = (Token*)calloc(size, sizeof(Token));
	vector->size = size;
	vector->count = 0;
	return vector;
}

void Token_Vector_Push_Back(Token_Vector* vector, Token token)
{
	if (vector->count == vector->size) {
		int temp_count = vector->count;

		//Vector* new_array = Vector_Create(vector->size+1);
		//vector->count = temp_count;
		vector->data = (Token*)realloc(vector->data, vector->size + 1);
		vector->size++;
		/*memcpy(new_array->data, vector->data, vector->size);
		free(vector->data);
		free(vector);
		vector = &new_array;*/
	}
	vector->data[vector->count] = token;
	vector->count++;
}

void Token_Vector_Pop_Back(Token_Vector* vector)
{
	Token null_token = { NULL,NULL,(Token_Type)NULL };
	vector->data[vector->count - 1] = null_token;
	vector->count--;
}

void Token_Vector_Insert(Token_Vector* vector, Token val, int index)
{
	Token null_token = { NULL,NULL,(Token_Type)NULL };
	Token_Vector_Push_Back(vector, null_token);
	for (int i = index; i < vector->count; i++)
	{
		Token tmp;
		tmp = val;
		val = vector->data[i];
		vector->data[i] = tmp;
	}
}
Token Token_Vector_Get_Element(Token_Vector* vector, int element)
{
	return vector->data[element];
}
void Token_Vector_Resize(Token_Vector* vector, int size)
{
	Token null_token = { NULL,NULL,(Token_Type)NULL };
	vector->data = (Token*)realloc(vector->data, vector->size + size);
	vector->size++;
	vector->data[vector->count] = null_token;
	vector->count++;
	printf("%i", vector->size);
}

void Vector_Free(Token_Vector* vector)
{
	free(vector->data);
	free(vector);
}