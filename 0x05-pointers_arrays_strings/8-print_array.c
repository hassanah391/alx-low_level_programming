#include "main.h"
#include <stdio.h>

/*
 * print_array - prints n elements of an array of integers.
 * @a: a pointer that points to a string
 * @n: the number of elements of the array to be printed
 *
 * Return: null
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
