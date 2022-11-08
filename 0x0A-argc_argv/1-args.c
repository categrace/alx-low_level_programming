#include "main.h"
#include <stdio.h>

/**
  *main - a program that prints the number of arguements passed into it
  *@argc:an arguement counter
  *@argv:an arguement values
  *Return:Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

