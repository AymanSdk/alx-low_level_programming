#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
  int i = 0, j = 0;
  while (*(dest + i))
    i++;
  while (j < n && *(src + j))
  {
    *(dest + i) = *(src + j);
    i++;
    j++;
  }
  return (dest);
}
