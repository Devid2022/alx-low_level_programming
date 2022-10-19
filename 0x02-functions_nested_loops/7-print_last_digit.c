#include "main.h"

/**
  * print_last_digit - display the last digit of a number
  * @n: parameter to make the test
  * Return: return the last digit of the number
  */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (0);
}
