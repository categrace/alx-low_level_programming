#include "main.h"
#include <stdio.h>

/**
  *_strchrn function that locates a character in a string
  *@s: an input string to search
  *@c: an input character to locate string
  *Reurn: returns pointer to c positions
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}



