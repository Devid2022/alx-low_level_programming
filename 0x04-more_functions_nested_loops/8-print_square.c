#include "main.h"

/**
  * print_square  - display a square on the terminal
  * @size: parameter int
  * Return: 0
  */

void print_square(int size)
{
	int n = 1;
	if (n > 0)
	{
		for (n = 1; n <= size; n++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
