#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: head of the list of nodes
 * Return: sum of datae of list otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *flag_node = head;

	while (flag_node)
	{
		sum += flag_node->n;
		flag_node = flag_node->next;
	}
	return (sum);
}
