#include "main.h"

/**
  * _memcpy - a function that copys memory area
  * @dest: memory area destination to copy
  * @src: memory area source to copy from
  * @n: number of bytes
  * Return: returns pointer to copy location
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (new);
}
