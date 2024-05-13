#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: char to be printed
 *
 * Return: nothing
 *
 */
void print_rev(char *s)
{
	int lngth = strlen(s);
	int i;

	for (i = lngth; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
