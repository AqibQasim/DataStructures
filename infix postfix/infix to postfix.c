#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;



void push(char item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}


char pop()
{
	char item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		getchar();

		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}

int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-' || symbol == '<' || symbol == '>' || symbol =='=' || symbol == '!' || symbol == '&' || symbol == '|')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}

int precedence(char symbol)
{
	if(symbol == '^')
	{
		return(7);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(6);
	}
	else if(symbol == '+' || symbol == '-')
	{
		return(5);
	}
	else if(symbol == '<' || symbol == '>')
	{
		return(4);
	}
	else if(symbol == '=' || symbol == '!')
	{
		return(3);
	}
	else if(symbol == '&')
	{
		return(2);
	}
	else if(symbol == '|')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{
	int i, j;
	char item;
	char x;
    int size=0;
	push('(');
	strcat(infix_exp,")");
	i=0;
	j=0;
	item=infix_exp[i];
    size = strlen(infix_exp);
	while(item != '\0')
	{
		if ( i == 0 ) //Checking operator in start
        {
            if (isdigit(item) == 0 && isalpha(item) == 0)
            {
            printf("\nInvalid Infix Operator usage in beginning.\n");
            getchar();
            exit(1);
            }
        }
        if ( i == size ) //Checking operator in end (Not Working)
        {
            if (isdigit(item) == 0 && isalpha(item) == 0)
            {
            printf("\nInvalid Infix Operator usage in end.\n");
            getchar();
            exit(1);
            }
        }
        if (isdigit(item) == 0 && isalpha(item) == 0) //2 Operators used together
            {
            if (isdigit(infix_exp[i+1]) == 0 && isalpha(infix_exp[i+1]) == 0)
                {
                if(infix_exp[i+1] == '\0')
                    {

                    }
                else if(infix_exp[i+1] == '(' || infix_exp[i+1] == ')' || infix_exp[i] == '(' || infix_exp[i] == ')') //Ignore Brackets
                    {

                    }
                else
                    {
                    printf("\nDouble Operators cannot be used.\n");
                    getchar();
                    exit(1);
                    }
                }
            }


        if (isdigit(item) !=0 && isdigit(infix_exp[i+1]) !=0 ) //2 Digits used together
            {
            printf("\nOperator should be used between operands.\n");
            getchar();
            exit(1);
            }
        else if (isalpha(infix_exp[i]) !=0 && isalpha(infix_exp[i+1]) !=0 ) //2 Alphabets used together
            {
            printf("\nOperator should be used between operands.\n");
            getchar();
            exit(1);
            }
		else if (isalpha(infix_exp[i]) !=0 && isdigit(infix_exp[i+1]) !=0 ) // 1 Alphabet & 1 Digit used together
            {
            printf("\nOperator should be used between operands.\n");
            getchar();
            exit(1);
            }
		else if (isdigit(infix_exp[i]) !=0 && isalpha(infix_exp[i+1]) !=0 ) //1 Digit & 1 Alphabet used together
            {
            printf("\nOperator should be used between operands.\n");
            getchar();
            exit(1);
            }

		else if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix_exp[j] = item;
			j++;
		}
		else if(is_operator(item) == 1)
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
			push(x);

			push(item);
		}
		else if(item == ')')
		{
			x = pop();
			while(x != '(')
			{
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{
			printf("\nInvalid infix Expression.\n");
			getchar();
			exit(1);
		}
		i++;


		item = infix_exp[i];
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");
		getchar();
		exit(1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");
		getchar();
		exit(1);
	}


	postfix_exp[j] = '\0';

}


void EvalPostfix(char postfix[])
{

    int i;
    char ch;
    int val,res=0;
    int A, B;


    for (i = 0; postfix[i] != '\0'; i++)
        {
        ch = postfix[i];
        if ( isdigit(ch) && 1 )
            {
            push(ch);
            }

        else if ( isalpha(ch) && 1 )
            {
            printf("Enter value for %c: ",postfix[i]);
            scanf("%d",&res);
            push(res);
            }


        else if (ch == '^' || ch == '*' || ch == '/' || ch == '+' || ch =='-' || ch == '<' || ch == '>' || ch =='=' || ch == '!' || ch == '&' || ch == '|')
            {

            A = pop();
            B = pop();

            if (ch == '^' )
                {
                val = B ^ A;
                }
            else if (ch == '*' )
                {
                val = B * A;
                }
            else if (ch == '/' )
                {
                val = B / A;
                }

            else if (ch == '+' )
                {
                val = B + A;
                }

            else if (ch ==  '-' )
                {
                val = B - A;
                }

            else if (ch ==  '<' )
                {
                val = B < A;
                }

            else if (ch ==  '>' )
                {
                val = B > A;
                }

            else if (ch ==  '=' )
                {
                val = B == A;
                }

            else if (ch ==  '!' )
                {
                val = B != A;
                }

            else if (ch ==  '&' )
                {
                val = B && A;
                }

            else
                {
                val = B || A;
                }



            push(val);
            }
        }
    printf(" \n Result of expression evaluation : %d \n", val);
}



int main()
{
	char infix[SIZE], postfix[SIZE];

	printf("\nEnter Infix expression : ");
	gets(infix);

	InfixToPostfix(infix,postfix);
	printf("Postfix Expression: ");
	puts(postfix);

    EvalPostfix(postfix);

	return 0;
}
