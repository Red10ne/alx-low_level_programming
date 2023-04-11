#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failure, otherwise 0
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int total_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;
	result = malloc(total_len * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len1);
	strncpy(result + len1, s2, len2);
	result[total_len - 1] = '\0';
	return (result);
}
