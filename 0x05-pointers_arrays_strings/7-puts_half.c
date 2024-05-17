#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 *
 * Return: nothing
 *
 */
void puts_half(char *str)
{
	int leng = strlen(str);
	int length_of_the_string = leng;
	int n;

	if (leng % 2 == 0)
	{
		for (n = leng / 2; n < leng; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (length_of_the_string - 1) / 2; n < length_of_the_string - 1; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
