#include "main.h"
#include <stdio.h>

/**
  *_strlen - returns the lemgth of a given string
  *
  *@s: string to check the length
  *Return: returns the length of the string
  */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


