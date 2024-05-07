#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * Return: 1 if uppercase or 0 if otherwise
 *
 * @c: character to be tested
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
