/* chapter-5 exercise-3
	Sabitha 26,august 2014 */
	
/* program to generate triangular number using formula */

#include <stdio.h>

int main(void)
{
	int n;
	int triangularnumber = 0;
	
	printf(" table of triangular numbers\n\n");
	printf(" n \t triangular number\n ");
	printf("--- \t -----------------\n");
	
	for(n = 1; n <= 10; ++n) {
		triangularnumber = (n * (n + 1)) / 2;
		printf(" %i \t %i \n", n, triangularnumber);
	}
	
	return 0;	
}
