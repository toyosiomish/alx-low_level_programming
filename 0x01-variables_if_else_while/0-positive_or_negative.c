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
printf("%d is ", n);
if(n > 0) 
{	
printf("%d is positive", n);
}		
else if(n == 0)
{    		
printf("%d is zero", n);
}	
else
{ 
printf("%d is negative", n);
}
printf("\n");
return (0);
}

