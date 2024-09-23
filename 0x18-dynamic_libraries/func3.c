#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination buffer where the string is copied to.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';  /* Add the null terminator */

	return (start);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int found_num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_num = 1;
			if (sign == 1 && result > (2147483647 - (*s - '0')) / 10)
			{
				return (2147483647);  /* Return INT_MAX on overflow */
			}
			else if (sign == -1 && result > (int)(2147483648U - (*s - '0')) / 10)
			{
				return (-2147483648); /* Return INT_MIN on overflow */
			}
			result = result * 10 + (*s - '0');
		}
		else if (found_num)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}

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

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;

	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
