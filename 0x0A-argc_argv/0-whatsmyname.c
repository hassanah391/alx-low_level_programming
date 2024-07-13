#include "main.h"

/**
 * main - entry point of the program
 * @argc: count of arguments
 * @argv: an array of the arguments
 *
 * description: prints the file name
 *
 * Return: returns 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');

	return (0);
}
