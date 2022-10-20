#include "main.h"

/**
  *  print_line - draw a straight line
  * @n: int parameter
  * Return: 0
  */


void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}

}
