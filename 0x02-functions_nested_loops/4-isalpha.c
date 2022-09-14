#include "main.h"

/**
 * _isalpha-checks if it is alpha
 * Description: Checks letters
 * @c: Param
 * Return: zero
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
