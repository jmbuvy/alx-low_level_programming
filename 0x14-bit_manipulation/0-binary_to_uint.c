#include <unistd.h>
#include "main.h"
/**
 * _putchar - funct that is writing char c to stdout.
 * @c: The Char.
 * Return: 1 on success.
 * Else, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
