#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int lowerCase;
int upperCase;
while (lowerCase <= 'z')
{
	putchar(lowerCase);
	lowerCase += 1;
}
while (upperCase <= 'Z')
{
	putchar(upperCase);
	upperCase += 1;
}
putchar('\n');
return (0);
}
