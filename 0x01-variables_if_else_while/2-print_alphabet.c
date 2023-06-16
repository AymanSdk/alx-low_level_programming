#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char alphastart = 'a';

	while (alphastart <= 'z')
	{
		putchar(alphastart);
		alphastart++;
	}
	putchar('\n');
	return (0);
}
