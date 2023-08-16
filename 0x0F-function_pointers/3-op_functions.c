#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers.
 * @a: first number.
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the diff between 2 numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the prod of 2 numbers.
 * @a: First number.
 * @b: second number
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division of 2 numbers.
 * @a: First number
 * @b: Second number
 * Return: The div of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the rem of division of 2 numbers.
 * @a: First number
 * @b: Second number
 * Return: The rem of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
