#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer points to the first element in the list
 *
 * Return: the number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);

}
