#include "main.h"

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
			else if (sign == -1 && result > (2147483648U - (*s - '0')) / 10)
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
