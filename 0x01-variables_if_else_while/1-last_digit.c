#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Prints the last digit of a randomly generated number,
*and whether it is greater than 5, less than 6, or 0
*Return: Always return 0
*/
int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is ", n);
lastn = n % 10;
if (lastn > 5)
{
printf("Last digit of %d and is greater than 5\n", n, lastn);
}
else if (lasten == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
