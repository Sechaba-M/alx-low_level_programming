#include "main.h"
/**
 * main -entry point
 *
 * _islower - check if letter in lower case
 *
 * Retuns: 1 if lower cas and 0 otherwise 
 */

int _islower(int c)
{
	int ret;

	if (c >= 123 ||  c <= 96)
	{
		ret = 0;
	}
	else
	{
		ret = 1;
	}
	return ret;
}

