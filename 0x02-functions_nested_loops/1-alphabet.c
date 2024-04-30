#include "main.h"

/*
 * print_alphabet - Make the alphabet
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
