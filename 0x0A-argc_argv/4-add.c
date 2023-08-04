#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Checks string for digits
 * @str: Array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declare variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts string*/

	{
		if (!isdigit(str[count])) /*checks string for digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prints program name.
 * @argc: Counts arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declare variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*fun checks the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI- THIS CONVERTS STRING TO INT*/
			sum += str_to_int;
		}

		/*incase symbols contained are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*prints sum*/

	return (0);
}
