#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-determines if the number is positive or negative
 *
 * Return:zero if success
 */
int main(void)
{
int n;

srand (time(0));
n = rand() - RAND_MAX / 2;
/*your code goes in here*/

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}return (0);
}
