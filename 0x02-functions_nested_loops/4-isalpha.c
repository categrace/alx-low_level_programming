#include "main.h"
/**
  *_isalpha checks main.h
  *@c: An input character.
  *Description: function returns 1 if character is letter, lowercase or upercase.
  *Returns 1 otherwise 0.
  */
int _isalpha(int c)
{
	char islower, isupper;
	int isletter = 0;


	for (islower = 'a'; islower <= 'z'; islower++)
	{
		for (isupper = 'A'; isupper <= 'Z'; isupper++)
		{

			if (c == islower || c == isupper)
				isletter = 1;

		}
	}
	return (isletter);
}
