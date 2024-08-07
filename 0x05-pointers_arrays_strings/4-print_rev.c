#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a pointer that points to a string
 *
 * Return: return null.
 */
void print_rev(char *s)
{
	char *ss = s;

	while (*ss != '\0')
		ss++;

	while (ss != s)
	{
		ss--;
		_putchar(*ss);
	}
	_putchar('\n');
}
