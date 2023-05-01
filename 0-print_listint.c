/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *hd)
{
	size_t count = 0;

	while (hd != NULL)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
		count++;
	}

	return (count);
}
