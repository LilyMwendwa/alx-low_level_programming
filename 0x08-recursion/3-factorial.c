#include "main.h"

/**
 * factorial- returns the factorial of a given number
 * @n: the integer to return
 * Return: -1 if n lower than 0
 */

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 && n == 1)
	{
		return (1);
	}
	else
	{
		next_factorial = factorial(n - 1);
		return (n * next_factoral);
	}
}
