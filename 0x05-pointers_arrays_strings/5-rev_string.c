#include <stddef.h> /* For NULL */
#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: A pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	char *start;
	char *end;
	char temp;

	if (s == NULL)
	{
		return;
	}

	start = s;
	end = s;

	/* Move the end pointer to the end of the string */
	while (*end != '\0')
	{
		end++;
	}
	end--; /* Set end to the last valid character */

	/* Swap the characters from the beginning and the end of the string */
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
