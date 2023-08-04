#include "main.h"
/**
 * _memset - Fills block of memory with Specific Value
 * @s: Starting address of the Memory to be Filled
 * @b: Desired Value
 * @n: The Number of bytes to be Changed
 * Return: The Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
