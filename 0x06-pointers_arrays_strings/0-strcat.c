#include "main.h"
#include <string.h>

/**
 * _strcat -  function that concatenates two strings.
 * @src: input string
 * @dest: input string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
