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
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%dis positive\n", n);
else if (n < 0)	
printf("%dis negative\n", n);
else
printf("%dis zero\n", n);
printf("\n");
return (0);
}
