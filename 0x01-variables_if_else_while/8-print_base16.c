#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);

	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
