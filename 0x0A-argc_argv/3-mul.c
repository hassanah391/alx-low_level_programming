#include "main.h"
#include <stdio.h>

int main (int argc,char *argv[])
{
	int x, y, res;

	if (argc != 3)
	{
		_putstring("Error\n");
		return (1);
	}

	x = (int) *argv[1] - 48;
	y = (int) *argv[2] - 48;
	res = x * y;

	_putint(res);
	_putstring("\n");

	return (0);
}
