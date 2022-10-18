#include "main.h"

/**
  *_isalpha - display if a caracter is a lowercase uppercase or not
  *@c: parameter to make the test
  *Return: 1 if c is a letter, lowercase or uppercase
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
