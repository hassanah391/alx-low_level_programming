#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with first char
 * @str: a pointer that points to a string
 *
 * Return: return a null
 *
 */
void puts2(char *str)
{
	int index = 0;

	while (*str != '\0')
	{
		if (index % 2 == 0)
			_putchar(*str);
		str++;
		index++;
	}
	_putchar('\n');
}
