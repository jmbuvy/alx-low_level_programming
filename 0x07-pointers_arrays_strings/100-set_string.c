#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: Is the pointer to pointer
 * @to: Pointer Char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
