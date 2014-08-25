/* chapter-3 example-6
	Sabitha 21,August 2014 */

/* Using comments in a Program */

/* This program adds two integer values and diplays the results */

#include<stdio.h>

int main(void)
{

	/* Declare variables */
	int value1;
	int value2;
	int sum;

	/*  Assign values and calculate their sum */
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;

	/* Display the result */
	printf("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;

}