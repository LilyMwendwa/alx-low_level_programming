#include <stdio.h>
#include "main.h"

/**
 * main- allows us to print either number
 * or fizz or buzz or fizzbuzz
 *
 * Return: 0;
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
	if ((num % 3 == 0) && (num % 5 == 0))
	{
		printf("FizzBuzz ");
	}
	else if ((num % 3) == 0)
	{
		printf("Fizz ");
	}
	else if ((num % 5) == 0)
	{
		if (num != 100)
		{
		printf("Buzz ");
		}
		else
		{
		printf("Buzz ");
		}
	}
	}
}
