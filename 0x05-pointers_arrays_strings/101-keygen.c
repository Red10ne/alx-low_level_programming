#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12
/**
 * main - the main function
 * Return: 0
 */
char *generate_password(void);

int main(void)
{	
	char *password = generate_password();
	printf("%s\n", password);
	free(password);
	return (0);
}
/**
 * generate_password - function that generete passwd.
 * Return: 0
 */
char *generate_password(void)
{
	static const char valid_chars[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
	const int num_chars = sizeof(valid_chars) - 1;
	
	char *password = malloc(PASSWORD_LENGTH + 1);

	if (!password)
	{
		fprintf(stderr, "Error: failed to allocate memory for password\n");
		exit(EXIT_FAILURE);
	}
	srand(time(NULL));
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = valid_chars[rand() % num_chars];
	}
	password[PASSWORD_LENGTH] = '\0';
	
	return (password);
}
