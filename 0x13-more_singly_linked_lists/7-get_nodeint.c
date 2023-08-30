#include "lists.h"
/**
 * get_nodeint_at_index - Returning node at a specific index in linked list
 * @head: first node in the linked list
 * @index: The index
 * Return: Points to node we need, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
