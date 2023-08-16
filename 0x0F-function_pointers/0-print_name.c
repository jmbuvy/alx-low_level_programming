#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - fun to print name
 * @name: The string to add
 * @f:Pointer to the func
 * Return :(nothing)
 **/
void print_name(char *name, void (*f)(char *));
{
	if(name == NULL || f == NULL)
		RETURN;
	f(name);
}
