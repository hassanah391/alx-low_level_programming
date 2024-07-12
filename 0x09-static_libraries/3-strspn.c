#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s;
	char *f = accept;
	unsigned int matches = 0;

	while (*s1 != '\0')
	{

		while (*s1 != *f && *f != '\0')
			f++;


		if (*s1 == *f)
			matches++;

		else
			break;

		f = accept;
		
		s1++;
	}

	return (matches);
}
