#include "main.h"

/**
 * *_memset - function that fills memory
 *
 * @n: number of byte
 * @s: area pointed
 * @b: constant byte
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
