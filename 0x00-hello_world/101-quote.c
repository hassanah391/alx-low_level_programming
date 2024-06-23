#include <unistd.h>
#include <string.h>

/**
 * main - Prints a specific message to the standard error
 *
 * Return: Always 1
 */

int main(void)
{
char *message =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, message, strlen(message));
return (1);
}
