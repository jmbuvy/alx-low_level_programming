#include "main.h"
/**
 *_memcpy - Function coping the memory Area
 *@dest: where memory is stored
 *@src: where memory is Copied
 *@n: The Number of bytes
 *Return: The Copied mem with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
