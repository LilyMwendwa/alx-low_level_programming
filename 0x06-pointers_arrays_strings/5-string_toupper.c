#include "main.h"

/**
 * string_toupper- Changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address to the string
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
