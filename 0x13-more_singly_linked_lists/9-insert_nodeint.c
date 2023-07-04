#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function
 * that inserts a new node at a given position
 * @head: head of the list of nodes
 * @idx:is the index of the list where
 * the new node should be added. Index starts at 0
 * @n: information to add
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *flag_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (flag_node && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = flag_node->next;
			flag_node->next = new_node;
			return (new_node);
		}
		else
			flag_node = flag_node->next;
		i++;
	}
	return (NULL);

}
