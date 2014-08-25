/* chapter-5 example-2
	Sabitha 25,August 2014 */

/* introduction of for statement */

/* 200th triangular number */

#include <stdio.h>

int main(void)
{
	/* declare variables */
	int n;
	int triangularnumber = 0;

	/* for loop begins */
	for (n = 1; n <= 200; n = n + 1)
		triangularnumber = triangularnumber + n;

	/* display results */
	printf("The 200th triangular number is %i\n", triangularnumber);

	return 0;
}



