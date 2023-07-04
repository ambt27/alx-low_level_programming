#include "lists.h"
#include <stdio.h>
size_t list_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * list_len - function thatcounst the number of nodes
 * @head: the head of nodes
 * Return: the len of a list of nodes
 */
size_t list_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				nodes++;
				a = a->next;
				b = b->next;
			}
			a = a->next;

			while (a != b)
			{
				nodes++;
				a = a->next;
			}
			return (nodes);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function that
 * prints a listint_t linked list.
 * @head: head of node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, flag = 0;

	nodes = list_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		while (flag < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			flag++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
