#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times character should be printed
 *
 * Return: ....
 *
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
