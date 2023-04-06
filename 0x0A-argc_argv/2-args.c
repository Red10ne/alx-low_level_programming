#include "main.h"
#include <stdio.h>
/**
 * main - prog. taht prints all arg it receive
 * @argc: number of arg
 * @argv: argemunts
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
