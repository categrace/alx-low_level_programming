#include "main.h"

/**
  *string_toupper- function that capitalises all words of a string
  *@s: an input string
  *Return char converted to uppercase
  */
char *string_toupper(char *s)
{
	char *new = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (new);
}
