#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}

}
