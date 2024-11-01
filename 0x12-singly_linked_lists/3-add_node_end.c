#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: linked list
 * @str: data for new node
 *
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tail;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{

	tail = *head;

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;
	tail = new_node;
	}
	return (new_node);
}
