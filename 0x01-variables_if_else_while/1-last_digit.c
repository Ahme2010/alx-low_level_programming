#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the last digit of a randomly generated number
* and whether it is greater than 5, less than 6, or 0.
* Return: Always 0.
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is ",n);
if (n > 5) 
{
	printf("greater than 5"); 
}
if (n == 5)
{
	printf("zero");
}
if (n < 6 && n !=0) 
{

	printf("Less than 6 not 0");
}
	printf("\n");
return (0);
}
