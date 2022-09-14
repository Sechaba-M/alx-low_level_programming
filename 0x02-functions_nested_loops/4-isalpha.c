#include "main.h"
/**
 * _isalpha - check if the character is a aplphabet upper case and lower case 
 *
 * c - ascii intiger value of the character
 *
 * Return: 1 or 0 depending on the bollean
 */
int _isalpha(int c)
{
	int ret;

	if ( c < 64 || c > 122 )
	{
		ret = 0;
	}
	else if (c >= 91 && c <= 96)
	{ 
		ret = 0;
	}
	else 
	{
		ret = 1;
	}
	return ret;
}
