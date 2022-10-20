#include "main.h"

/**
  * more_numbers - print x10 the numbers from 0 to 14
  * Return: 0
  */

void more_numbers(void)
{
	int i, n;

	n = 0;
	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
