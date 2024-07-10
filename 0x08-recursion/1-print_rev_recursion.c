#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line
 * @s: a pointer to the string to be reversed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(++s);
	_putchar(*s);
}

/**
 * print_reverse_string_with_newline - prints a new line
 * @s: the reversed string
 */

void print_reverse_string_with_newline(char *s)
{

	_print_rev_recursion(s);

	putchar('\n');
}
