#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head of the linkedlist
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int minus;
	listint_t *flag_node;

	if (*h == NULL)
		return (0);
	while (*h)
	{
		minus = *h - (*h)->next;
		if (minus > 0)
		{
			flag_node = (*h)->next;
			free(*h);
			*h = flag_node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
		}
	}
	*h = NULL;
	return (len);
}
