#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	int i, lenght = 0;

	if (str == NULL)
		return (NULL);
	while (str[lenght])
		lenght++;
	copy = malloc(sizeof(char) * (lenght + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < lenght; i++)
		copy[i] = str[i];
	copy[lenght] = '\0';
	return (copy);
}
