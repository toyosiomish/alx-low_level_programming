#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0)); /* Initialize random number generator with current time */

	n = rand(); /* Generate a random number and assign it to variable n */

	printf("The number %d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}

	printf("\n");

	return (0);
}

