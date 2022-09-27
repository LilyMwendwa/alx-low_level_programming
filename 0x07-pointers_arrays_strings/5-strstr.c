#include "main.h"

/**
 * _strstr- locates a substring
 * @haystack: string to check for needle
 * @needle: substring to check for haystack
 * Return: pointer to beginning of needle or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i])
		}
		haystack++;
	}
	return (0);
}
