#include "main.h"
/**
  *factorial - returns the cfactorial of a given number
  *@n: number to be used
  *
  *Return: the factorial of a number
  */

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_fuctorial);
}