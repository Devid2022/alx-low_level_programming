#include "main.h"

/**
  *_islower - print if a Letter is lowercase
  *@c : the parameter to test the letter
  *Return: 1 if it's lowercase 0 otherwise
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
