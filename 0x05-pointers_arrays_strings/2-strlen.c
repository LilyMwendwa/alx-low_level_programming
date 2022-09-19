#include <string.h>
#include "main.h"

/**
 * _strlen- gets the length of a string
 * @s: string pointer to print
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		return (len);
	}
}
