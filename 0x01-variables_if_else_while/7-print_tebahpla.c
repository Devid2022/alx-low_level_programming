#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - prints alphabet in lowercase
 * Return: Returns 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);
	putchar('\n');
	return (0);
}
