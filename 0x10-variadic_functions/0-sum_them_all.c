#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - returns the sum all arguments passed to fuction
  *@n: number of parameters passed to the function
  *Return: sum of all parameters
  *or 0 if n == 0
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list sp;
	unsigned int i;
	unsigned int sum = 0;

	va_start(sp, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(sp, int);
	va_end(sp);
	return (sum);
}
