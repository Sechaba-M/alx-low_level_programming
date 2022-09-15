#include "main.h"

void print_line(int n)
{
	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
