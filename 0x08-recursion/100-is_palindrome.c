#include "main.h"

/**
 * is_palindrome- checks if a string is palindrome
 * @s: string to check
 * Return: 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursions - 1, &flag);
	return (flag);
}

/**
 * check- checks if a string is palindrome
 * @s: string to check
 * @start: start of index
 * @end: end of index
 * @flag: flag to indicate if a string is palindrome
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursions- calculates the length of string
 * @s: String to be used
 * Return: length of string
 */

int _strlen_recursions(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursions(s + 1);
	}
	return (sum);
}
