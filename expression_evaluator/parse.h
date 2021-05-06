#pragma once
#include "token.h"

typedef struct
{
	Token current;
	Token previous;
	Token next;
}Parse_State;


/*Token_Vector* Parse(Token_Vector* tokens)
{
	Parse_State token_store;
	//Token null_token = NULL;
	for (int i = 0; i < tokens->size; i++)
	{
		//token_store.current = tokens->data[i];
		if (i <= 0)
			//token_store.previous = null_token; do something later 
	}
}*/
