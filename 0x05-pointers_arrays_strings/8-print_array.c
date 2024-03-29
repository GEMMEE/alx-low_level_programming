#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array, separated by comma,
 *               followed by space, and new line at the end
 * @a: pointer to the array
 * @n: number of elements to be printed
 *
 * Author: Gamachu AD
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
