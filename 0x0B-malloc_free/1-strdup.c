#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplictes a string.
 * @str: the string to be duplicated
 *
 * description: returns a pointer to a newly allocated space in memory,
 *              which contains a copy of the string given as a parameter.
 *
 * Return: On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available or str is empty
 */
char *_strdup(char *str)
{
	int i;
	/* find the length of original string "str" */
	int length = _strlen_recursion(str);

	/* allocate space for the new array "duplicated" */
	char *duplicated = malloc(length * sizeof(char));

	if (str == NULL) /* return NULL if str is empty */
		return (NULL);

	/* returns 1 if malloc failed */
	if (duplicated == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (NULL);
	}



	/* copy the content of "str" to "dupliacted" */
	for (i = 0; i < length; i++)
		duplicated[i] = str[i];

	return (duplicated);
}

/**
 * _strlen_imple - calculates the length of a string
 * @s: the string to calculate its length
 * @n: length of the string
 *
 * Return: returns the length of a string.
 */

int _strlen_imple(char *s, int n)
{
	if (*s == '\0')
		return (n);

	return (_strlen_imple(s + 1, n + 1));
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string to calculate its length
 *
 * Return: returns the length of a string.
 */
int _strlen_recursion(char *s)
{
	return (_strlen_imple(s, 0));

}
