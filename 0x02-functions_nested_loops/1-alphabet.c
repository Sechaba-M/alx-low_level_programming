#include "main.h"
/**
 * main - entry point
 * print-alphabet - build a alphabet in lower case
 *
 *
 * return : 0 (Success)
 */
void print_alphabet(void)
/*prints small cas alpabets*/
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
