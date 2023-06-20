#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, b1, b2;
	long int a, b, d, e, f, g;

	a = 1;
	b = 2;
	b1 = b2 = 1;
	printf("%ld, %ld, ", a, b);
	for (c = 3; c <= 98; c++)
	{
		if (b1 == 1)
		{
			d = a + b;
			b1 = 0;
		}
		else
			d = a + b;
		if (b2 == 1)
		{
			e = d / 1000000000;
			f = d % 1000000000;
			g = b / 1000000000;
			b2 = 0;
		}
		else
		{
			e = (d + b) / 1000000000;
			f = (d + b) % 1000000000;
			g = b / 1000000000;
		}
		printf("%ld%ld", e, f);
		a = b;
		b = d;
		if (c != 98)
			printf(", ");
		if (g > 0)
			b1 = 1;
	}
	printf("\n");
	return (0);
}
