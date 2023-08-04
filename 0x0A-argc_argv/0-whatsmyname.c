#include <stdio.h>
#include "main.h"

/**
 * main - Fun that Prints the name of program.
 * @argc: Number of arguments.
 * @argv: The array of arguments.
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
