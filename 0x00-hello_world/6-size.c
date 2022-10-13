#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print size of data types
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char c;
	float f;
	long x;
	long long y;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(y));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
