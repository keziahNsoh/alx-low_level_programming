#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	int x[5];
	int *p;

	x[2] = 1024;
	p = &n;
  /*
   * main - write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 5) = 98;
  /* ...so that this prints 98\n */
	printf("a[2] = %d\n", x[2]);
	return (0);
}
