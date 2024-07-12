#include "main.h"
#define NULL 0

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int matches = 1;
	char *s1 = haystack;
	char *f = needle;

	while (*f != *s1 && *s1 != '\0')
		s1++;

	if (*f == *s1)
	{
		char *ptr = s1;

		while (*f != '\0' && *f == *ptr && *ptr != '\0')
		{
			f++;
			ptr++;
		}

		if (*ptr == '\0' && *f != '\0')
			matches = 0;

		else if (*f != *ptr)
			matches = 0;

		if (matches == 1)
			return s1;
		else
			return NULL;
	}

	else
		return NULL;
}
