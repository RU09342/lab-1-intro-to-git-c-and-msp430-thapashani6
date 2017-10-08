#include <stdio.h>

int math(int a, int b, char operator);             /* function prototype that does the math, has three inputs: 2 for numbers and 1 for the opeartion */
void main()
{
	int answer;
	printf("Please choose one of the following operation: + , - , * , / , %% , \n");
	char c;
	c = getchar();                         /* asks the user for the operation */
	answer = math(15, 6, c);               /* calls function to do the operation */
	printf("The reuslt is: %d\n", answer);
}

int math(int a, int b, char operator)
{
	int result;           /* an int for the answer of the operation */
	if (operator == '-')         /* if statement for subtraction */
	{
		result = a - b;
	}
	else if (operator == '+')         /* if statement for addition */
	{
		result = a + b;
	}
	else if (operator == '*')         /* if statement for multiplication  */
	{
		result = a*b;
	}
	else if (operator == '/')         /* if statement for division  */
	{
		result = a / b;
	}
	else if (operator == '%')         /* if statement for modulus */
	{
		result = a%b;
	}
	else
	{
		result = NULL;
	}
	return result;       /* resturn the result of operation */
}