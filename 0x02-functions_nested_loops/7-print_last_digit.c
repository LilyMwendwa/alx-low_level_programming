#include "main.h"

/**
 * print_last_digit- prints the value of the last digit
 * @v: value
 * Return: value of the last digit
 */
int print_last_digit(int v)
{
	int last_digit = v % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
