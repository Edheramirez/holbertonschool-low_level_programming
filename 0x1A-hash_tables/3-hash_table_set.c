#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table, in collision,
 *  adds the new node at the beginning of the list.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key and can´t be an empty string
 * @value: the value associated with the key. must be duplicated
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	/* Get the index segun la key the key */
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			if (item->value == NULL)
				return (0);
			return (1);
		}
		item = item->next;
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
