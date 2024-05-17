#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string into another string
 *
 * @dest: pointing to buffer
 *
 * @src: points to string to be copied
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	strrcpy(dest, src);
	return (dest);
}
