#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14 followed by a new line
 *
 * Return: ....
 *
 */
void more_numbers(void)
{
	int num, line;

	for (num = 0; num <= 10; num++)
	{
		for (line = 0; line <= 14; line++)
		{
			if (line >= 10)
			{
				_putchar('1');
			}
			_putchar(line % 10 + '0');
		}
		_putchar('\n');
	}
}
