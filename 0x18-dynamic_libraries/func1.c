#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character.
 * @c: It's a character.
 *
 * Return: Always 0.
 *
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}

/**
 * _isalpha - checks for alphabetic character.
 * @c: It's a int.
 *
 * Return: Always 0.
 *
 */
int _isalpha(int c)
{
return (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0);
}

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
