#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: The number to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
