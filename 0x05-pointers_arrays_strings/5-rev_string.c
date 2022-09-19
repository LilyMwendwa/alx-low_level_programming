#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: zero
 */

void rev_string(char *s)
{
	int len = strrev(s);

	while (len--)
	{
		_putchar(*(s + len))
	}
_putchar(10);
}
