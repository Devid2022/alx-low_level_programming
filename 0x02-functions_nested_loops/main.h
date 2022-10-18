#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */

int _putchar(char c);

/**
  *print_alphabet - display alphabet letter from a to z
  *Return: 0
  */
void print_alphabet(void);

/**
  *print_alphabet_x10() - display 10x alphabet from a to z
  *Return: 0
  */
void print_alphabet_x10(void);
#endif
