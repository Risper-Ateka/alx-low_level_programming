#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *main - entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 (success), 1 (error)
  */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int mul = (a * b);

	if (argc == 3)
	{
		printf("%d\n", mul);
	}
	else if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
