#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts, or NULL if
 * there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare, *ptr1, *ptr2;

	tortoise = hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			ptr1 = head;
			ptr2 = tortoise;
			while (ptr1 && ptr2)
			{
				if (ptr1 == ptr2)
					return (ptr1);
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
		}
	}
	return (NULL);
}
