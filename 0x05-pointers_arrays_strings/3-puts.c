#include <stdio.h>
#include "main.h"

/**
 *_puts- prints a string
 *@str: a param to put functions
 *Return: zero
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
