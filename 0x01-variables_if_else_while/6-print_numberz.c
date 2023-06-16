#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *
 * Return: Always 0.
 */
int main(void)
{
	int N;

	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');

	putchar('\n');

	return (0);
}
