#include "main.h"

/**
 * set_bit - the value of the bit to 1 at given index
 * @index: start from 0 of the bit to be set
 * @n: pointer number
 * Return: 1 if it success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
