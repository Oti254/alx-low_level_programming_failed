#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: string copied into
 *
 * @src: string to be copied
 *
 * @n: number of bytes
 *
 * Return: string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
