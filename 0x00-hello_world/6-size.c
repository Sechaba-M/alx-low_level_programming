#include <stdio.h>
/**
 * main - entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	float f;
	char c;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int:%lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
