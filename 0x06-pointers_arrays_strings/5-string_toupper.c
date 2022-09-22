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

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= 32;
		}
		i++;
	}
	return (str);
}
