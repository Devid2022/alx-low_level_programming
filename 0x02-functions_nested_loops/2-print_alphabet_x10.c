#include "main.h"

/**
  * print_alphabet_x10 - Print alphabet x10 from a to z
  * Return: return 0
  */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
