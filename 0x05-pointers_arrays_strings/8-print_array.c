#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: a pointer to the array of integers
 * @n: the number of elements of the array to be printed
 *
 * Description: Prints n elements of an array of integers
 * where n is the number of elements of the array to be printed.
 *
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		printf("%d, ", *a);

		else
			printf("%d", *a);
		a++;
	}
	putchar('\n');
}
