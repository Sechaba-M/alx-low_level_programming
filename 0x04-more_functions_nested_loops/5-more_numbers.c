#include "main.h"

void more_numbers(void)
{
	int a;
	int i;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
