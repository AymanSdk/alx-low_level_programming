#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number of times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int si7ri, bondo9, hawli;

	if (n >= 0 && n <= 15)
	{
		for (si7ri = 0; si7ri <= n; si7ri++)
		{
			_putchar(48);
			for (bondo9 = 1; bondo9 <= n; bondo9++)
			{
				hawli = si7ri * bondo9;
				_putchar(44);
				_putchar(32);
				if (hawli <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(hawli + 48);
				}
				else if (hawli <= 99)
				{
					_putchar(32);
					_putchar((hawli / 10) + 48);
					_putchar((hawli % 10) + 48);
				}
				else
				{
					_putchar(((hawli / 100) % 10) + 48);
					_putchar(((hawli / 10) % 10) + 48);
					_putchar((hawli % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
