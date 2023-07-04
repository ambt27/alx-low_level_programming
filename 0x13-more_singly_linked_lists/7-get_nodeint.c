#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: head of the list of nodes
 * @index: is the index of the node, starting at 0
 * Return: nth node of list otherwise 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new_node = head;

	while (new_node && i < index)
	{
		new_node = new_node->next;
		i++;
	}
	return (new_node ? new_node : NULL);

}
