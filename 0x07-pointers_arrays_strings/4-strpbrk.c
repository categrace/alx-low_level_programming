#include "main.h"
#include <stdio.h>
/**
  *_strpbk - function searches a string for any setof bytes.
  @s:an input string
  *@accept: an input character with to locate into string s
  *Return: a pointer to the byte in s that matches one of the bytes in accept,
  *or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	char *new = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = new;
		s++;
	}
	return (NULL);
}

