#include "token.h"

Token_Vector* Tokenize(const char* str)
{
	int i = 0;
	//String_Pop_Back(str);
	//Token* tokens = calloc(strlen(str->size), sizeof(Token));
	//tokens->value = calloc(256, sizeof(char));
	Token_Vector* tokens = Token_Vector_Create(strlen(str)-1);
	//for (; str[i] != '\0'; i++)
	//for (;i = 0; str->data[i] = '\0',i++)
	
	for(; str[i] != '\0'; i++)
	{
		if (isspace(str[i]))
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = WHITESPACE;
			tokens->data[i].value;// = str->data[i];
		}
		if (isdigit(str[i]))
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = NUM;
			tokens->data[i].value = str[i];
		}
		else if (is_left_paren(str[i]))
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = LEFT_PAR;
			tokens->data[i].value = str[i];
		}
		else if (is_right_paren(str[i]))
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = RIGHT_PAR;
			tokens->data[i].value = str[i];
		}
		else if (str[i] == '+')
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = PLUS;
			tokens->data[i].value = str[i];
		}
		else if (str[i] == '-')
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = MINUS;
			tokens->data[i].value = str[i];
		}
		else if (str[i] == '*')
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = MUL;
			tokens->data[i].value = str[i];
		}
		else if (str[i] == '/')
		{
			tokens->data[i].pos = i;
			tokens->data[i].type = DIV;
			tokens->data[i].value = str[i];
		}
		else
		{
			tokens->data[i].pos = NULL;
			tokens->data[i].type = (Token_Type)NULL;
			tokens->data[i].value = str[i];
			return tokens;
		}
			printf("Token_value:%c\nPos:%i\nToken_type:%i\n\n", tokens->data[i].value, tokens->data[i].pos, (int)tokens->data[i].type);
		
	}
	return tokens;
}

bool is_left_paren(char c)
{
	return (c == '(');
}
bool is_right_paren(char c)
{
	return (c == ')');
}