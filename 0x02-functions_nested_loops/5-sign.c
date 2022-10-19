#include "main.h"

/**
  * print_sign - display sign of a number
  * @n: parameter to make the test
  * Return: return 1 and prints + if n is greather than 0
  * return -0 if n equals to zero
  * return -1 if n is less than zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
