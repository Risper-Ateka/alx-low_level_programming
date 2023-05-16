#include "main.h"
#include <unistd.h>
/**
  *_putchar - writes a character c to stdout
  *@c: character to print
  *Return on success 1
  *in error -1, errno set appropriately
  */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
