#include "main.h"

/**
  *_isdigit - fucntion that checks for a digit
  *@c: An input character
  *Return: 1 if c is a digit and 0 otherwise
  */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
