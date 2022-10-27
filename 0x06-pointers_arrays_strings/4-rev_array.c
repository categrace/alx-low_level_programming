#include "main.h"

/**
  *reverse_array - function that reverses an array
  *@a:an input integer
  *@n:number of elements of array
  *Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int new;

	while (i < n--)
	{
		new = a[i];
		a[i++] = a[n];
		a[n] = new;
	}
}
