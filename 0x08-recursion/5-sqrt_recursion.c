#include "main.h"

/**
 * _sqrt_recursion- returns the natural square root of a no.
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (_find_sqrt(0, n));
}

/**
 * _find_sqrt- returns the square root of a number
 * @n: test number
 * @x: squared number
 * Return: square root of n
 */

int _find_sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_find_sqrt(n + 1, x));
}
