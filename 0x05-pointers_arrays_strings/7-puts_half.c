#include "main.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string.
 * @s: A pointer that point to a string.
 *
 *
 * Return: Returns an int (the length of a string)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: a pointer that points to a string
 *
 * Description: print the second half of the string
 *
 * Return: return null
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		/* Move the pointer to the middle of the array */
		for (i = 0; i < len / 2; i++)
			str++;

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	else
	{
		/* Move the pointer to index of n + 1 of the array */
		for (i = 0; i < n + 1; i++)
			str++;

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
