/* CHAPTER-4 EXAMPLE-2
	Sabitha 25,August 2014 */

/* Arithmetic operators */

#include<stdio.h>

int main(void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	/* subtraction */
	result = a - b;
	printf("a - b = %i\n", result);

	/* Multiplication */
	result = b * c;
	printf("b * c = %i\n", result);

	/* Division */
	result = a / c;
	printf("a / c = %i\n", result);

	/* Precedence */
	result = a + b * c;
	printf("a + b * c = %i\n", result);

	printf("a * b + c * d = %i\n", a * b + c * d);

	return 0;
}
