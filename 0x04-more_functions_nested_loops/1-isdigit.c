#include "main.h"

/**
  * _isdigit - check if a input is between 0 and 9
  * @c: integer parameter for the test
  * Return: 1 if it is a digit 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
