#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the list of nodes
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	int i = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		i++;
	}
	return (i);
}
