#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function return pointer to newly allocated space
 * @str: string
 * Return: copy of string given as parameter
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = malloc(strlen(str + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);

	return (duplicate);
}
