#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with b
 * @s: a pointer to a memory area to fill
 * @b: The value to set
 * @n: The number of bytes to be set to the value
 *
 * Return: returns a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ptr = s;
	int intn = n;

	for (i = 0; i < intn; i++)
	{
		*ptr = b;
		ptr++;
	}

	return (s);
}
