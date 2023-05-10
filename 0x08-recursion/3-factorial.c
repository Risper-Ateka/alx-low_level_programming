#include "main.h"
/**
  *factorial - returns the factorial of a given number
  *@n: a number
  *Return: factorial on success
  *and  -1 for error
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
