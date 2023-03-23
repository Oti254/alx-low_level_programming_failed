#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all lowercase except q and e
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
if (i != 101 && i != 133)
{
	putchar(i);
}
putchar('\n');
return (0);
}
