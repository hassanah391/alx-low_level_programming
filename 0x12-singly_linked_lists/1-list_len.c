#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h:  pointer points to the first element in the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
