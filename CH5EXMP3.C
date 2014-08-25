/* chapter-5 example-3
	Sabitha 25,August 2014 */

/* table of triangular numbers */

#include <stdio.h>

int main(void)
{
	/* declare variables */
	int n;
	int triangularnumber = 0;

	printf("Table of triangular numbers\n\n");
	printf("n \t sum from 1 to n \n");
	printf("--- \t ------------------\n");

	/* for loop begins */
	for(n = 1; n <= 10; ++n) {
	triangularnumber += n;
	printf("%i \t %i\n", n, triangularnumber);
	}
	/* for loop ends */

	return 0;
}
