#include <stdio.h>

/**
 *  Main - print if the number is postive, zero, or negative
 *  Description: using the main function
 *  this program prints "Programming is positive, zero, or negative"
 *  Return: always (0)(sucessfuls)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
