#include "main.h"
#include <stdio.h>

/**
 * main - program that prints it's name
 * @argc: number of arg
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc <= 1)
	{
		for (i  = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
