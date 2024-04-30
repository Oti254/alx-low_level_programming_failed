#include "main.h"

/**
 * _isalpha - checks alphabetic character
 *
 * @c: character that is checked
 *
 * Return: 1 if c is a letter or 0 if otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
