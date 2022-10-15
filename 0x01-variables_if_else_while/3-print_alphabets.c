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
	char upc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (upc = 'A'; upc <= 'Z'; upc++)
		putchar(upc);
	putchar('\n');
	return (0);
}
