#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int N1, N2, N3;

	for (N1 = 0; N2 < 8; N1++)
	{
		for (N2 = N1 + 1; N2 < 9; N2++)
		{
			for (N3 = N2 + 1; N3 < 10; N3++)
			{
				putchar((N1 % 10) + '0');
				putchar((N2 % 10) + '0');
				putchar((N3 % 10) + '0');
				if (N1 == 7 && N2 == 8 && N3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
