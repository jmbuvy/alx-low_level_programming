#include "main.h"
/**
 * _puts - Function printing a string, followed by new line, to stdout
 * @str: String to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
