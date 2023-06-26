#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int string_length = 0, n;

	while (str[string_length] != '\0')
	{
		string_length++;
	}
	if (string_length % 2 == 0)
	{
		n = string_length / 2;
	}
	else
	{
		n = (string_length + 1) / 2;
	}
	while (n < string_length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
