#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  concatenates two strings in a dynamic array
 * @s1: the first string
 * @s2: the sconed string
 *
 * Return: pointer points to a newly allocated space in memory
 *         which contains the contents of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	int counter3 = 0;
	char *s3;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len3 = len1 + len2 + 1;
	s3 = malloc(len3 * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	if (len3 - 1 == 0)
		return (s3);

	if (len1 > 0 && len2 == 0)
	{
		for (i = 0; i <= len1; i++)
			s3[i] = s1[i];
	}
	else if (len1 == 0 && len2 > 0)
	{
		for (i = 0; i <= len2; i++)
			s3[i] = s2[i];
	}
	else
	{
		while (counter3 < len1)
		{
			s3[counter3] = s1[counter3];
			counter3++;
		}
		while (counter3 < len3)
		{
			s3[counter3] = s2[counter3 - len1];
			counter3++;
		}
	}
	return (s3);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (len);

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
