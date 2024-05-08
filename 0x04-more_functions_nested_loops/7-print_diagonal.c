#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times \ should be printed
 *
 * Return: ....
 *
 */
void print_diagonal(int n)
{
	int d, l;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (d = 0; d < n; d++)
	{
		for (l = 0; l < d; l++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
