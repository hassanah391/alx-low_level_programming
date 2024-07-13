#include "main.h"

/**
 * main - Entry point of the program
 * @argc: count of the arguments
 * @argv: an array of the arguments
 *
 * description: prints all arguments it receives
 *
 * Return: returns 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}

	return (0);
}
