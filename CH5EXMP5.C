/* chapter-5 example-5
	Sabitha 26,August 2014 */

/* nested for loops */

#include <stdio.h>

int main(void)
{
	int n;
	int number;
	int triangularnumber = 0;
	int counter;

	/* for loop begins */
	for( counter = 1; counter <= 5; ++counter) {
	printf("what triangular number do you want? ");
	scanf("%i", &number);

		/* nested for loop */
		for(n = 1; n <= number; ++n)
		triangularnumber += n;

	printf("triangular number %i is %i\n\n", number, triangularnumber);
	}

	return 0;
}


