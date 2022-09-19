#include <stdio.h>
#include "main.h"

/**
 * _strlen- gets the length of a string
 * @s: string pointer to print
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		putchar(*(s + length));
		length++;
	}
	putchar(10);
}
