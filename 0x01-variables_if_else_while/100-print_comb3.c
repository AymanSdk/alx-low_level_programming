#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int N1, N2;

	for (N1 = 0; N1 < 9; N1++)
	{
		for (N2 = N1 + 1; N2 < 10; N2++)
		{
			putchar((N1 % 10) + '0');
			putchar((N2 % 10) + '0');
			if (N1 == 8 && N2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
