#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters[25], char low;
	int i = 0;

	for (low = 'z'; low >= 'a'; low--)
	{
	
		letters [i] = low;
		i++;

	}

	putchar (letters);
}
