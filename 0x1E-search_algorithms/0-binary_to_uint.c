#include "main.h"
#include <math.h>

/**
  * binary_to_uint - fucntion to change bin to dex
  * @b: string
  * Return: dec or 0
  *
  *
  *
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int index, i;

	for (index = 0; b[index] != '\0'; index++)
	{
		;
	}

	for (i = 0; i < index; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if(b[i] == '1')
		{
			dec += pow(2, index - i - 1);
		}
	}

	return (dec);
}
