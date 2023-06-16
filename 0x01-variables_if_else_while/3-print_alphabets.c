#include <stdio.h>
/**
 * main - main block
 * Print alphabet in Lowercase and then uppercase
 * Return: Always 0
 */
int main(void)
{
	char Alpha = 'a';

	while (Alpha <= 'z')
	{
		putchar(Alpha);
		Alpha++;
	}
	Alpha = 'A';
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');
	return (0);
}
