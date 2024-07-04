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
    int i, sum, diff;

    srand(time(NULL));

    /* Generate random characters for the password */
    for (i = 0; i < 11; i++)
    {
        password[i] = rand() % 94 + 33; /* ASCII printable characters range */
    }
    password[11] = '\0';

    /* Calculate the expected checksum */
    sum = 0;
    for (i = 0; i < 11; i++)
    {
        sum += password[i];
    }
    sum %= 63;

    /* Adjust the last character to make the sum match 62 */
    diff = 62 - sum;
    password[10] += diff;

    printf("%s\n", password);

    return (0);
}
