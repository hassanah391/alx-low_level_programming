#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer for the first element of the array
 * @size: is number of elements in the array
 * @value:  is the value to search for
 *
 * Return: if value is present return its indix, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m;

	l = 0;
	r = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		printf("\n");

		m = (l + r) / 2;

		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * print_array - prints a sub-array
 * @array: is a pointer to the first element of the array
 * @start: index of the first element in the sub-array
 * @end: index of the last element in the sub-array
 */
void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);

		if (i != end)
			printf(", ");
	}
}
