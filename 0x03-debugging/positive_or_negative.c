#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* more headers goes there */

/**
  * positive_or_negative - print if a number is postive negative or equals to
  * zero
  * @i: integer
  * Return: Returns 0
  */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
