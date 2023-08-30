#include "lists.h"
/**
 * add_nodeint - Adds new node in the beginning of a linked list.
 * @head: points to the 1st node on the list
 * @n: Data to be inserted
 * Return: The pointer to a new node, or NULL if otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
