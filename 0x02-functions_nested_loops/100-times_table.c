#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int si7ri, bondoq, ha9od;

	if (n >= 0 && n <= 15)
	{
		for (si7ri = 0; si7ri <= n; si7ri++)
		{
			_putchar('0');
			for (bondoq = 1; bondoq <= n; bondoq++)
			{
				_putchar(',');
				_putchar(' ');
				ha9od = si7ri * bondoq;
				if (ha9od <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ha9od + '0');
				}
				else if (ha9od <= 99)
				{
					_putchar(' ');
					_putchar(ha9od / 10 + '0');
					_putchar(ha9od % 10 + '0');
				}
				else
				{
					_putchar(ha9od / 100 + '0');
					_putchar(ha9od / 10 % 10 + '0');
					_putchar(ha9od % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
