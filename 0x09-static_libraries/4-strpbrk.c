#include "main.h"
/**
 * _strpbrk - The Entry point
 * @s: The Input value
 * @accept: The Input Value
 * Return: Always 0 Success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
