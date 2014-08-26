/* chapter-5 exercise-5
	Sabitha 26,august 2014 */
	
/* correct the program */

#include <stdio.h>

int main(void)
{
	int n;
	int poweroftwo = 1;

	printf("TABLE OF POWERS OF TWO\n\n");
	printf(" n \t power of two\n");
	printf("--- \t ---------------\n");

	for(n = 0; n <= 10; ++n) {
	printf("%i \t %i\n", n, poweroftwo);
	poweroftwo *= 2;
	}

	return 0;
}
