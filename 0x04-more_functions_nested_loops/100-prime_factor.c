#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

long int largest_prime_factor(long int n) {
	long int i = 2;

	while (i * i <= n) {
		if (n % i) {
			i++;
		}
		else {
			n /= i;
			i = 2;
		}
	}
	return n;
}

int main() {
	long int n = 612852475143;
	printf("%ld\n", largest_prime_factor(n));

	return 0;
}

