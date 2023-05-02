#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list.
 * @head: pointer to pointer to the head node
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
