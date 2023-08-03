#include "main.h"

/**
 * get_bit -return value o the bit at index
 * @n: checking bits
 * @index: whch bit to check
 * Return: the value of the bit on index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
