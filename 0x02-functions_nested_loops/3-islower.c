#include "main.h"

/**
  *@c: an input character
  *_islower - check main.h
  *Description:usese _putchar function to print
  *Return 1 if c is lower case and 0 otherwise
  */

int _islower(int c)
{
	char  i;
	int islower = 0;

	for (i = 'a'; i <= 'z'; i++)

	{
		if (i == c)
		{
			islower = 1;
		}
	}
	return (islower);
}
