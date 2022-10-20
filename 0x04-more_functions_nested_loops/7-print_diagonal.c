#include "main.h"

/**
  * print_diagonal - draw diagonal on the terminal
  * @n: integer parameter
  * Return: 0
  */


void print_diagonal(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

