#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	char *s1 = s;
	char *f = accept;

	while (*s1 != '\0')
	{
		while (*s1 != *f && *f != '\0')
			f++;

		if (*s1 == *f)
			break;

		f = accept;
		s1++;

	}

	return (s1);
}
