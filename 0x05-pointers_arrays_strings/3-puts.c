#include "main.h"

/**
  * _puts - print a string with a new line
  * @str : char parameter
  * Return: always 0
  */

void _puts(char *str)
{
	while (*str != '\0')
	{

		_putchar(*str++);
	}
	_putchar('\n');
}
