#include "main.h"
#include <stdio.h>
#include <string.h> 

/**
  *_strlen - returns the lemgth of a given string
  *
  *@s: string to check the length
  *Return: returns the length of the string
  */

int _strlen(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;
	

	l = strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for  (i = 0; i < l - 1; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;

		end_ptr--;
	}
	return (l);
}
