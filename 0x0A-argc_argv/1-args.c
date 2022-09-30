#include <stdio.h>
#include "main.h"

/**
 * main - prints the no. of args passed into it
 * @argc: count arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
