#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Returns the sum of two numbers.
* @a: The first operand.
* @b: The second operand.
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - fuction for subtraction
* @a: The first operand.
* @b: The second operand.
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Multiplies two numbers.
* @a: The first operand.
* @b: The second operand.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Division function.
* @a: The first operand.
* @b: The second operand.
* Return: The result of dividing a by b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - The modulus function
* @a: The first operand.
* @b: The second operand.
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
