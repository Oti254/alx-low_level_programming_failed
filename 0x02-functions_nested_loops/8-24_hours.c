#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: ...
 *
 */
void jack_bauer(void)
{
	int h, b, m, d;

	for (h = 0; h <= 2; h++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((h <= 1 && b <= 9) || (h <= 2 && b <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(h + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
