#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, t;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (t = 0; t < i; t++)
				_putchar(' ');
			_putchar('\\');
			if (i == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
