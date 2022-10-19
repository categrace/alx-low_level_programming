#include "main.h"

/**
  *ptint_sign checks main.h
  *@n:an input number
  *Description: if n is greater than 0 prints + and returns 1, if
  *n is zero returns 0 and prints 0,if n is less than zero return
  *s -1 and prints -.
  *Return:1, 0 or -1.
  */

int print_sign(int n)
{

	int num;

	if (n > 0)

	{
		num = 1;
		_putchar ('+');
	}

	else if (n == 0)
	{
		num = 0;
		_putchar ('0');
	}

	else
	{
		num = -1;
		_putchar ('-');
	}
	return (num);
}
