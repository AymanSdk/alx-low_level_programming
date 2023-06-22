#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
			_putchar(i + '0');
	}
	_putchar('\n');
}
