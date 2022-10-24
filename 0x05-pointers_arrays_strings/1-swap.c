#include "main.h"

/**
  * swap_int  - function that swap two integer
  * @a: Integer parameter
  * @b: Integer parameter
  * Return: return 0
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
