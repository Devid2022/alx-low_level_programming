#include "main.h"

/**
  * print_diagonal - draw diagonal on the terminal
  * @n: integer parameter
  * Return: 0
  */


void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

