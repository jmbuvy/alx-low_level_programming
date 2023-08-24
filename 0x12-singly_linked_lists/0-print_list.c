#include <stdio.h>
#include "lists.h"
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Funct printing elements in a linked list.
 * @h: The pointer to list_t list.
 * Return: no. of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
