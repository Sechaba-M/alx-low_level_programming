#include "main.h"

int print_sign(int n)
{
	int out;

	if (n < 0)
	{
		_putchar('-');
		out = -1
	}
	else if ( n == 0)
	{
		_putchar('0');
		out = 0;
	}
	else
	{
		_putchar('+');
		out = 1;
	}
	return (out);
}
