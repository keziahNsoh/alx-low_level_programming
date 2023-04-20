#include <stdio.h>


/**
 * main - Prints the size of various types on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(viod)

{
	printf("Size of a chzr: %zu bytes(s)\n", sizeof(char));

	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float %zu bytes(s)\n", sizeof(float));
	return (0);
}
