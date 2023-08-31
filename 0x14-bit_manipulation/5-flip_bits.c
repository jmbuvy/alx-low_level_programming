#include "main.h"

/**
 * flip_bits - func counting no. of bits to be changed
 * @n: The 1st no.
 * @m: The 2nd no.
 * Return: No. of bits to changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
