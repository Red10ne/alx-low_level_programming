#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src.
 * @dest: the buffer pointed to
 * @src: string pointed
 * Return: p = dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}
