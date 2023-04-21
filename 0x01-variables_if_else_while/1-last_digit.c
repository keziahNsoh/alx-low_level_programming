#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints a text according number
 * Return: Always (Success)
 *
 * /

int main(void)

{
	int n, lasted;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (lasted > 5)
	{
	printf("Last digit of %d is %d and is greater than 5 \n", n, lastd);
	}
	else if (lasted ==0)
	{
	printf("Last digit of %d is %d and is 0 \n", n, lastd);
	}
	else if (lasted < 6 && lasted != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, lastd);
	}
	return (0);
}

