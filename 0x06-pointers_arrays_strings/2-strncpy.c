#include "main.h"
#include <string.h>

/**
  * *_strncpy - copies a string
  * @dest: input
  * @src: input
  * @n: input
  * Return: char
  */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
