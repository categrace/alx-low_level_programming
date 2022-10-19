#include "main.h"
/**
  *_abs - check main
  *@c: input character
  *Description: this fucntion will return the absolutr value of a number
  *Return: absolute value of c
  */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
