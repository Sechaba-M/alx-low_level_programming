#include "main.h"
/**
 * main - entry point
 * vod print-alphabet(void)
 *
 *
 * return : 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
