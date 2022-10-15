#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - prints alphabet excerpt e and q
 * Return: Returns 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}
	putchar('\n');
	return (0);
}
