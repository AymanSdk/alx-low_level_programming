#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char AlphaL;

	for (AlphaL = 'a'; AlphaL <= 'z'; AlphaL++)
	{
		if (AlphaL != 'e' && AlphaL != 'q')
			putchar(AlphaL);
	}

	putchar('\n');

	return (0);
}
