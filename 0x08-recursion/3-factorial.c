#include "main.h"

/**
 * factorial- returns the factorial of a given number
 * @n: the integer to return
 * Return: -1 if n lower than 0
 */

int factorial(int n)
{
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
		n = factorial(n * (n - 1));
	}
}
