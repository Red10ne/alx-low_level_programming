#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @n: bytes from mem.
 * @src: mem. area
 * @dest: return
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
