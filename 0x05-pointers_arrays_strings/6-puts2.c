#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: points to a string
 *
 * Return: nothing
 *
 */
void puts2(char *str)
{
	int len = strlen(str);
	int l;

	for (l = 0; l <= len - 1; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
