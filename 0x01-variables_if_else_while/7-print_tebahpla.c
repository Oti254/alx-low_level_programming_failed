#include <stdio.h>
#include <stdlib.h>
/**
 * main - print lowercase letters in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 122; i >= 97; i--)
{
	putchar(i);
}
putchar('\n');
return (0);
}
