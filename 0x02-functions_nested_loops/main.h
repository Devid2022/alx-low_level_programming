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
  *print_alphabet_x10 - display 10x alphabet from a to z
  *Return: 0
  */
void print_alphabet_x10(void);

/**
  * _islower - display result of lower number or letter
  * Return: On success 1 otherwise 0
  */
int _islower(int c);

/**
  *_isalpha - display if it's lowercase uppercase or not
  *@c: parameter to make test
  *Return: Return 1 if true 0 otherwise
  */
int _isalpha(int c);

/**
  *print_sign - display sign of a number
  *@n: parameter to make the test
  *Return: return 1 if n is greather than zero
  *return 0 if n is equals to zero
  * return -1 if n is less than 0
  */
int print_sign(int n);

/**
  *int_abs - display absolute value of an integer
  *return: returns 0
  */
int _abs(int n);

/**
  *print_last_digit - display laqt digit of a number 
  *return the last digit on the number
  */
int print_last_digit(int n);

void jack_bauer(void);

void times_table(void);

int add(int a, int b);

void print_to_98(int n);

void print_times_table(int n);
#endif
