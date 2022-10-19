#include <stdio.h>
#include "main.h"

/**
  *_abs - display the absolue value of an integer
  *@n: parameter to make the test
  * Return: returns 0
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	if (n >= 0)
	{
		return (n);
	}
	return (0);
}
