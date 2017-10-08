# YOU NEED TO POPULATE THIS README!!!!!!!!
#Shani Thapa 
## Uploaded C code for the math function 10/7
 
## Usage 
Once math.h and math.c the function can be used.

math(int a, int b, char operator);

## Valid Inputs 
### int a, int b
the ints are chosen already

### char operator
char allows for the following values ['+','-','*','/','%']. Otherwise t will result in a NULL

## Function

Add(char = '+')
int1 will be added to int 2 and return the sum of a signed interger 
ex. math(15,6,'+') = 21

Subtract(char='-')
int2 will be subtracted from int1 and return as the difference as a signed integer
ex. math(15,6,'-') = 9

Multiply(char='*')
int 1 will be multiplied by int2 and function will return the difference as a signed integer
ex. math(15,6,'*') = 90

Divide(char='/')
int1 will be integer divided by int2. This will only return the quotient as an integer
ex. math(15,6,'/') = 2

Modulus(char='%')
* int1 will be integer divided by int2. This will return the remained of the devision   as a signed integer
ex. math(15,6,'%') = 3