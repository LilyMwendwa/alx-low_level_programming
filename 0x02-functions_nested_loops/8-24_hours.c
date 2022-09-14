#include "main.h"

/**
 * jack_bauer- Prints every minute of the day
 *
 * Return: zero
 */
void jack_bauer(void)
{
	int hours;

	for (hours = 0; hours < 24; hours++)
	{
	int minutes;

	for (minutes = 0; minutes < 60; minutes++)
	{
	_putchar(hours / 10 + '0');
	_putchar(hours % 10 + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes % 10 + '0');
	_putchar('\n');
	}
	}
}
