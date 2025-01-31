#include <stdio.h>
#include <math.h>

/**
*  jump_search - Searches for a value in a sorted array
*  using Jump search algorithm
*  @array: Pointer to the first element of the array
*  @size: Number of elements in the array
*  @value: Value to search for
*
*  Return: First index where value is located, or -1 if not found
*          or array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	int step;
	int i;
	int prev = 0;
	int current = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt(size);

	/* Jump phase to find the block where value may be present */
	while (current < (int)size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	/* Adjust current to the last valid index if it exceeds the array bounds */
	current = current >= (int)size ? (int)size - 1 : current;

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	/* Linear search within the identified block */
	for (i = prev; i <= current && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
