#include "lists.h"
/**
 * print_listint - Funct printing elements of a linked list.
 * @h:The type  listint_t to be printed
 * Return: The no. of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
