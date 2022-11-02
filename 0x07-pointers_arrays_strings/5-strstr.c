#include "main.h"
#include<stdio.h>

/**
  *_strstr - function that locates a substring
  *@haystack: an input string to search in
  *@needle: an input string to locate into string haystack
  *Return: a pointer to the beginning of the located substring,
  *or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	char *newt = needle, *newq = haystack;

	while (*haystack)
	{

		newq = haystack;
		needle = newt;;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = newq + 1;
	}
	return (NULL);
}
