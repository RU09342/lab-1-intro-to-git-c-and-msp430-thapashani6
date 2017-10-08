#include <stdio.h>

int math(int a, int b, char c);             /* function prototype that does the math, has three inputs: 2 for numbers and 1 for the opeartion */
void main()
{
	int answer;
	printf("Please choose one of the following operation: + , - , * , / , %% , \n");
	char c;
	c = getchar();                         /* asks the user for the operation */
	answer = math(10, 6, c);               /* calls function to do the operation */
	printf("The reuslt is: %d\n", answer);
}

int math(int a, int b, char c)
{
	int result;           /* an int for the answer of the operation */
	if (c == '-')         /* if statement for subtraction */
	{
		result = a - b;
	}
	if (c == '+')         /* if statement for addition */
	{
		result = a + b;
	}
	if (c == '*')         /* if statement for multiplication  */
	{
		result = a*b;
	}
	if (c == '/')         /* if statement for division  */
	{
		result = a / b;
	}
	if (c == '%')         /* if statement for modulus */
	{
		result = a%b;
	}
	return result;       /* resturn the result of operation */
}


