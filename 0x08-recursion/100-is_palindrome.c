#include "main.h"

/**
 * _length- checks the length of a string
 * @s: string
 * Return: length of a string
 */

int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _length(s + 1));
}

/**
 * check- checks if the string is palindrome
 * @i: is the index
 * @lg: length of string
 * @s: string
 * Return: 1 if true, 0 if false
 */

int check(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
			return (check(i + 1, lg - 1, s));
		else if (s[i] != s[lg])
			return (0);
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome- checks if a string is palindrome
 * @s: string
 * Return: 1 if true, 0 if otherwise
 */

int is_palindrome(char *s)
{
	return (check(0, _length(S) - 1, s));
}
