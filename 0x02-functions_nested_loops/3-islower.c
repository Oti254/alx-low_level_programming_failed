#include "main.h"

/**
 * _islower - checks lowercase character
 *
 * @c: character for checking
 *
 * Return: 1 when it is lowercase otherwise 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
