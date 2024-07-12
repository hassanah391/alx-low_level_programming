#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;
	char *s = src;

	/* Move to the end of dest string */
	while (*d != '\0')
	{
		d++;
	}

	/* Copy src string to dest */
	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}

	/* Null-terminate the resulting string */
	*d = '\0';

	return (dest);
}
