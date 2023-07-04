#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: head of the list of nodes
 * Return: head when list is not empty otherwise return 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *flag_node;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	flag_node = (*head)->next;
	free(*head);
	*head = flag_node;

	return (n);
}
