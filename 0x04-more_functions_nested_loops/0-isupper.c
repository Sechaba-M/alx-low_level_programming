#include <stdio>
#include "main.h"
/**
 * _isupper - checks if a character is upper case
 *
 * @c: int variable 
 *
 * return: 0 (successful)
 */
int _isupper(int c)
{
	int ret;

	if (c <= 64 || c >= 91)
	{
		ret = 0;
	}
	else
	{
		ret = 1;
	}
	return ret;
}

