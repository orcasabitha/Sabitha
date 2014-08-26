/* chapter-5 exercise-2
	Sabitha 26,august 2014 */
	
/* program to generate n and its square */

#include <stdio.h>

int main(void)
{
	int n;
	int a = 0;
	
	printf(" table of n and its square\n\n");
	printf(" n \t square of n\n ");
	printf("--- \t -----------------\n");
	
	for(n = 1; n <= 10; ++n) {
		a = n * n;
		printf(" %i \t %i \n", n, a);
	}
	
	return 0;	
}
