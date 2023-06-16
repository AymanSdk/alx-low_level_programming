#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digitOne, digitTwo, digitThree;

	for (digitOne = 0; digitOne < 8; digitOne++)
	{
		for (digitTwo = digitOne + 1; digitTwo < 9; digitTwo++)
		{
			for (digitThree = digitTwo + 1; digitThree < 10; digitThree++)
			{
				putchar((digitOne % 10) + '0');
				putchar((digitTwo % 10) + '0');
				putchar((digitThree % 10) + '0');
				if (digitOne == 7 && digitTwo == 8 && digitThree == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
