#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: number of elements in the array
 * @c: the character that the array gets initialized with
 *
 * Return: NULL if size = 0 , returns 1 if malloc fail,
 *         else a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	/* returns Null if the array empty */
	if (size == 0)
		return (NULL);

	/* allocate some space in the memory for the array */
	arr = malloc(sizeof(char) * size);

	/* returns 1 if malloc failed */
	if (arr == NULL)
	{
		_putstring("Not enough memory left!\n");
		exit(1);
	}
	/* initialize the array with a specific char c */
	while (i < size)
		arr[i++] = c;

	return (arr);

	/* deallocate the space of the array */
	free(arr);
}
