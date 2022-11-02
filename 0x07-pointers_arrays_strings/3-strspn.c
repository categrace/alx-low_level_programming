#include "main.h"
/**
  *_strspn - function that gets the lrngth of a prefix substring
  *@s: an input string
  *@accept: an input character with to locate into string s
  *Return: return pointer to c position
  */
unsigned int _strspn(char *s, char *accept)
{
	int count  = 0, flag;
	char *new = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = new;
		if (flag == 0)
			break;
	}
	return (count);
}

