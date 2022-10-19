#include "main.h"

/**
  *print_last_digit : check main.h
  *@d :An inteer input
  *Description: fuction prints last digit of number
  :Return:last digit of number  d
  */

int print_last_digit(int d)
{
	int n;

	if (d < o)
		n = -1 * (d % 10);
	else
		n = d % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
