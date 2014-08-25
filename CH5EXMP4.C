/* chapter-5 example-4
	Sabitha 25,August 2014 */

/* asking the user for input */

#include <stdio.h>

int main(void)
{
	/* declare variables */
	int n;
	int number;
	int triangularnumber = 0;

	printf("what triangular number do you want?");
	scanf("%i", &number);

	/* for loop begins */
	for(n = 1; n <= number; ++n)
	triangularnumber += n;

	/* display results */
	printf("triangular number %i is %i\n", number, triangularnumber);

	return 0;
}


