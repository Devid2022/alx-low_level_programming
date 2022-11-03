#include "main.h"

/**
  * find_sqrt - search a square root of a number
  * @num: integer parameter
  * @root: the root to be tested
  * Return: if a number has a natural sqaure root or not
  */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if ((root * root) == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}



/**
  * _sqrt_recursion - display the natural square root of a number
  * @n: integer input
  * Return: integer
  */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return ((find_sqrt(n, root)));
}
