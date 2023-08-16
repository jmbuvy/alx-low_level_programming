#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add- returns the sum of two numbers
 * @a: 1st number.
 * @b: 2nd number.
 * Return: sum(a+b)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- Return sub of two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns prod of two numbers.
 * @a: 1st number.
 * @b: 2nd number
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * * op_mod - Returns the rem after diving two numbers.
 * @a: 1st  number.
 * @b: 2nd number.
 * Return: Rem of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
