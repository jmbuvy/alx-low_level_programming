#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - It allocates memory by malloc.
 * @b: The Number of bytes to allocate.
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
