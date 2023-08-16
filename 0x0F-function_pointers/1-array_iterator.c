#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator:fun printing the arrays on new line
 * @array: The array
 * @size: number of elements to print.
 * @action:pointer to print
 * Return:void(nothing)
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if(array == NULL || action == NULL)
		return;
	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
