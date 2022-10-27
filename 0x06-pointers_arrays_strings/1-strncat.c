#include "main.h"
#include <string.h>

/**
  * *_strncat - concatenate two strings and display nuber of bytes that will
  * be showned
  * @dest: input
  * @src: input
  * @n: integer input
  * Return: char
  */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
