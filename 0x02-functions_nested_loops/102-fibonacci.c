#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;
	long int c;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 47)
			printf("%ld\n", c);
		else
			printf("%ld, ", c);
	}
	return (0);
}
