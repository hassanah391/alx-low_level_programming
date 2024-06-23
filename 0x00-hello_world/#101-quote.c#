#include <unistd.h>
#include <string.h>

/**
 * main : is entry point for the program.
 * Description: This program prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19" , followed by a new line, to the standard error
 * without using any function in manual page 3
 * Return: value is 1
 */

int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, message, strlen(message));
return (1);
}
