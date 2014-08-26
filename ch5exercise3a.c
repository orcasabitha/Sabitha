/* chapter-5 exercise-3a
	Sabitha 26,august 2014 */
	
/* program to generate every fifth triangular number between 5 and 50 */

#include <stdio.h>

int main(void)
{
	int triangularnumber;
	int n;
	
	printf(" table of triangular numbers\n\n");
	printf(" n \t triangular number\n ");
	printf("--- \t -----------------\n");
	
	for(n = 5; n <= 50; n = n+5) {
	
		triangularnumber = (n * (n + 1)) / 2;
		printf(" %i \t %i \n", n, triangularnumber);
	}
	
	return 0;	
}
