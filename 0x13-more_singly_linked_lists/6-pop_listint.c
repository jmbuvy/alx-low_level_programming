/**
 * pop_listint - Deleting head node of linked list.
 * @head: Points to 1st element in a linked list.
 * Return: Data deleted in elements,or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
