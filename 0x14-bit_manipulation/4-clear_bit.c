#include "main.h"

/**
 * clear_bit - func setting value of given bit to 0.
 * @n: points to the no. to be changed.
 * @index: The index.
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
