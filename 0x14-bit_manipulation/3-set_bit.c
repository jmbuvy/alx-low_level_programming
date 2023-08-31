#include "main.h"

/**
 * set_bit - setting a bit at a given index to 1.
 * @n: points to the no. to change.
 * @index: The index.
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
