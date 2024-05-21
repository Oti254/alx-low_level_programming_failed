#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings 
 *
 * @dest: string appended to
 *
 * @src: string to be appended
 *
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	_putchar('\n');
	return (dest);
}
