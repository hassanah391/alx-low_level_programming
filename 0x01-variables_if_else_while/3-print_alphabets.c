#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabit in lowercase.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i - 32);
	}
	putchar('\n');


	return (0);
}
