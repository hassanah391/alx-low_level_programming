#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    _putchar('0' + r);
    _putchar('\n');
    r = _abs(0);
    _putchar('0' + r);
    _putchar('\n');
    r = _abs(1);
    _putchar('0' + r);
    _putchar('\n');
    r = _abs(-98);
    if (r >= 10)
    {
        _putchar('0' + r / 10);
        _putchar('0' + r % 10);
    }
    else
    {
        _putchar('0' + r);
    }
    _putchar('\n');
    return (0);
}
