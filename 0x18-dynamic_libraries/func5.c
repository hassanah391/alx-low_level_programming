#include "main.h"


/**
 * _strchr - locate the first occurrence of a character in a string.
 * @s: a pointer to the null-terminated string to be searched.
 * @c: the character to be located
 *
 * Return: Returns a pointer to the first occurrence of the character c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (c == '\0' && *s == '\0')
		return (s);

	else if (*s == c)
		return (s);

	else
		return (NULL);
}

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
			return 0;
	}

	else
		return 0;
}
