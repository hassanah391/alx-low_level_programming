#include "main.h"

/**
 * main - entry point of the program
 * @argc: count of arguments
 * @argv: an array of the arguments
 *
 * description: prints the number of arguments (argc)
 *
 * Return: returns 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	char s =  (argc - 1) + '0';

	_putchar(s);
	_putchar('\n');

	return (0);
}
