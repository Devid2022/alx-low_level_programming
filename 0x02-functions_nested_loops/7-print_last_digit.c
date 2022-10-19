#include "main.h"

/**
  * print_last_digit - display the last digit of a number
  * @n: parameter to make the test
  * Return: return the last digit of the number
  */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n *= -1;
		_putchar(n + '0');
		return (0);
	}
	else
		_putchar(n + '0');
	return (0);
}
