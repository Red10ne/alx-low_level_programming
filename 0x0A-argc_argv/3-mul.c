#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - progr. that multiplies two N°.
 * @argc: number of argemunt
 * @argv: argemunts
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		sum = atoi(argv[2]) * atoi(argv[3]);
		printf("%d", sum);
	}
	return (0);
}
