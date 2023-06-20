#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number of times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k, l, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				l = k / 10;
				m = k % 10;
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + m);
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar('0' + l);
					_putchar('0' + m);
				}
				else
				{
					_putchar('0' + (k / 100));
					_putchar('0' + ((k / 10) % 10));
					_putchar('0' + (k % 10));
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
