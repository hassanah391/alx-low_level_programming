#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
    int res;

    res = append_text_to_file(NULL, "Best School !");
    printf("-> %i)\n", res);
    return (0);
}
