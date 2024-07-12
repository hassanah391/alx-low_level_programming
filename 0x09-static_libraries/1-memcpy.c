#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: A pointer to the destination array where the content is to be copied
 * @src: A pointer to the source of data to be copied
 * @n: The number of bytes to copy from the source to the destination.
 *
 * Return: returns a pointer to dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*d = *s;
		d++;
		s++;
	}

	return (dest);
}
