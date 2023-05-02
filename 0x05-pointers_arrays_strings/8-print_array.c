#include "main.h"
#include <stdio.h>

/**
  *print_array - prints elements of an array of integers
  *@a: array
  *@n: number of values to be printed
  */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != n - 1)
			printf(", ");
	}
	printf("\n");
}
