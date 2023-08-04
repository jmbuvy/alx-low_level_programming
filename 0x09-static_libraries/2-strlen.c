#include "main.h"
/**
 * _strlen - Function that returns length of string
 * @s: The String
 * Return: The length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
