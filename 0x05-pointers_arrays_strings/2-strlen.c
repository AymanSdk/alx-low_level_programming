#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
