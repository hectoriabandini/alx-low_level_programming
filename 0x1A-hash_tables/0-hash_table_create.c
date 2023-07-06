#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hyt;
	unsigned long int k;

	hyt = malloc(sizeof(hash_table_t));
	if (hyt == NULL)
		return (NULL);

	hyt->size = size;
	hyt->array = malloc(sizeof(hash_node_t *) * size);
	if (hyt->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		hyt->array[k] = NULL;

	return (hyt);
}
