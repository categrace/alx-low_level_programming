#include "main.h"

/**
  *print_most_numbers : function prints numbers 0 to 9
  *followed by a new line
  *Result: success 0
  */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

