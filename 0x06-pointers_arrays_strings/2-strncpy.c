#include "main.h"

/**
  *_strncpy - function that copys the strings
  *@dest: an input string
  *@src: an input string
  *@n: an input integer
  *Return: a pointer to the resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *new  = dest, *other = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = other;

	for (;i < n; i++)
		*dest++ = *src++;

	return (new);
}
