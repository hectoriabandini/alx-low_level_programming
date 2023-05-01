#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data.
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the data (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return 0;

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;


	return data;
}
