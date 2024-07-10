#include "main.h"

/**
 * _strlen_imple - calculates the length of a string
 * @s: the string to calculate its length
 * @n: length of the string
 *
 * Return: returns the length of a string.
 */

int _strlen_imple(char *s, int n)
{
	if (*s == '\0')
		return (n);

	return (_strlen_imple(s + 1, n + 1));
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string to calculate its length
 *
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	return (_strlen_imple(s, 0));

}
