#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Desciption: Prints the lowercase alphabet in reverse,
 *             followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
