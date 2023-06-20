#include <stdio.h>

/**
 * main - prints the add of the even-valued terms of the Fibonacci sequence whose values do not exceed 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, c = 0, sum = 2;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
