#include "main.h"
/**
 * flip_bits - flip to get from a number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, final;
	unsigned int j, i;

	j = 0;
	final = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (final == (diff & final))
			j++;
		final <<= 1;
	}
	return (j);
}
