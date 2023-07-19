#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Addition of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtraction of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Muiltiplication of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
