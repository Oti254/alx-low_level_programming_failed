#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 *
 * @s: char to be printed
 *
 * Return: ....
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (*s != '0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i++)
	{
		_putchar('s');
		s--;
	}
	_putchar('\n');
}
