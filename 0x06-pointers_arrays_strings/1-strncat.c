#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be appended to
 *
 * @src: string to be appended
 *
 * @n: number of bytes from src
 *
 * Return: pointer to resulting string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;

	while (*end)
	{
		end++;
	}
	while (n-- && *src)
	{
		*end++ = *src++;
	}
	*end = '\0';
	return (dest);
}
