#include "main.h"
#include <stdio.h>

/**
 * main -computes sum
 * Description: adds multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
int i;
int total;

total = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
total = total + 1;
}
}
printf("%d\n", total);
return (0);
}
