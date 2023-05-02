#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = NULL;

	while (*h != NULL) {
		if (*h <= (*h)->next) 
		{
			temp = (*h)->next;
			(*h)->next = NULL;
			free(*h);
			*h = temp;
			count++;
		} else {
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
	}

	return count;
}
