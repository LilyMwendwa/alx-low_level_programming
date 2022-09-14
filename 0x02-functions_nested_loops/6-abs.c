#include "main.h"

/**
 * _abs -prints absolute value of an integer
 *@i: integer
 * Return: zero
 */
int _abs(int i)
{
	if (i < 0)
	{
	i = -i;
	}
	else if (i > 0)
	{
	i = i;
	}
	else
	{
	i = 0;
	}
return (i);
}
