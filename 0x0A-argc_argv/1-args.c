#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments passed to Program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: Always 0 Success.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
