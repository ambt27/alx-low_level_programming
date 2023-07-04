#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: the list of nodes
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node = h;
	int i = 0;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	return (i);
}
