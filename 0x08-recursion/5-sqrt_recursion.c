#include "main.h"
/**
 * actual_sqrt_recursion - recurses to find square root
 * @n: number to find square root of
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * actual_sqrt_recursion - recurses to find square root
 * @n: number to find square root of
 * Return: square root if it exists. if not -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find matual
 * square root of a number
 * @n: number to find square root of
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
