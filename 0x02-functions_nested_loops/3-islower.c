#include "stdio.h"
#include "main.h"

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
