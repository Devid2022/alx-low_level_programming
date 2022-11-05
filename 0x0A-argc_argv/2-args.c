#include "main.h"
#include <stdio.h>

/**
  * main - Print the number of arguments
  * @argc: Counter
  * @argv: Arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int count = 0;
	
	if (argc > 0)
	{
		while (count < argc)
			printf("%s\n", argv[count]);
	}
	return (0);
}
