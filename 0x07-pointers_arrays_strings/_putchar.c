#include "main.h"
#include <unistd.h>

/**
  *_putchar - writes a character c to stdout
  *@c: Character to print
  *Return: on success 1
  *On erroe returns -1 and errno is set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
