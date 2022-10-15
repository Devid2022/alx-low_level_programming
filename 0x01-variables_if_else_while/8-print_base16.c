#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - prints results
 * Return: Returns 0
 */
int main(void)
{
	int n = 0;
	char hex;


	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
