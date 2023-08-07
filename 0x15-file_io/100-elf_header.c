#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char *s;

	s = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	i = _strlen(s);
	printf("%d\n", i);
	return (0);
}
