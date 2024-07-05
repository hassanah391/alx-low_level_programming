#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*p)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (*p == input[i])
			{
				*p = output[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
