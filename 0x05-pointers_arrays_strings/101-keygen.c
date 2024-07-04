#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[12];
    int i, sum;

    srand(time(NULL));

    /* Generate random characters for the password */
    for (i = 0; i < 10; i++)
    {
        password[i] = rand() % 94 + 33; /* ASCII printable characters range */
    }

    /* Set the last character to null terminator */
    password[10] = '\0';

    /* Calculate the expected checksum */
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum += password[i];
    }
    password[10] = (sum % 63) + 33; /* Adjust last character based on checksum */

    printf("%s\n", password);

    return (0);
}
