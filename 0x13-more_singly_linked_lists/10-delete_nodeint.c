#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list.
 * @head: head of the list of nodes
 * @index:is the index of the list where
 * the new node should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *flag_node = *head;
	listint_t *new_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(flag_node);
		return (1);
	}
	while (i < index - 1)
	{
		if (flag_node->next == NULL)
			return (-1);
		flag_node = flag_node->next;
		i++;
	}
	new_node = flag_node->next;
	flag_node->next = new_node->next;
	free(new_node);
	return (1);

}
