#include "stdio.h"
#include "main.h"

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
