#include "main.h"

/**
 *int factorial - Returns the factorial of given number.
 * @n: Number returning facrtorial from.
 * Return: Factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
