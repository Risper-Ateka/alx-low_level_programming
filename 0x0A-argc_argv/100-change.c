#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - prints the minimum number of coins
  *to make change for an amount of money
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 (success), 1 (error)
  */
int main(int argc, char *argv[])
{
	int n;
	int z;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (z = 0; z < 5 && n >= 0; z++)
	{
		while (n >= coins[z])
		{
			result++;
			n -= coins[z];
		}
	}
	printf("%d\n", result);
	return (0);
}
