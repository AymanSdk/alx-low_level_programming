#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;

	i--;
	j = 0;
	while (j < i)
	{
		temp = s[i];
		s[i--] = s[j];
		s[j++] = temp;
	}
}
