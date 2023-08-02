#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that Returns the Natural squareroot of a number
 * @n:The Number to calculate the square root of
 * Return: Resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion -Function that Recurses to find the Natural Square Root of a number
 * @n: Number to calculate the Sqaure Root of
 * @i:Iterator
 * Return: Resulting Square Root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
