#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers, and new line
 *
 * @n: number of elements
 *
 * @a: array
 *
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != 0)
		{
			printf(", ");
		}
		printf("%d", a[l]);
	}
	printf("\n");
}

