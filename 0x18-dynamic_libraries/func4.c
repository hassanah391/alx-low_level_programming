#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}

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
