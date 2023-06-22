#include "main.h"
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
