#include "main.h"
#include <stdio.h>

/**
 * main - pro. prints N°. of arg passed into
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum;

	for (i = 0; i < argc; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
