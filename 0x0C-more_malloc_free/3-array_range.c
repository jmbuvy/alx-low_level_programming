#include <stdlib.h>
#include "main.h"

/**
 * *array_range - fun that creates an array of int.
 * @min: Min range of values stored.
 * @max: The max range of values stored and the number of elements.
 *
 * Return: Pointer to new Arr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
