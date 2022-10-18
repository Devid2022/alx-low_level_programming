#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - display lowercase alphabet from a to z
  * Return : return 0
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
