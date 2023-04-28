#include "main.h"
#include <stdio.h>

/**
  *main - prints the numbers from 0 to 100 followed by a new line
  *but multiples of 3 prints Fizz
  *and multiples of 5 prints Buzz
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n != 100)
		{
			if (n % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (n % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", n);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");

	return (0);
}
