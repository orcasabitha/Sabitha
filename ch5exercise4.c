/* chapter-5 exercise-4
	Sabitha 26,August 2014 */
	
/* factorial */

#include <stdio.h>

int main(void)
{
	int c;
	int n; 
	int fact = 1;
	
	printf(" enter a number to calculate its factorial\n");
	scanf("%d", &n);
	
	for(c = 1; c <=n; c++)
	fact = fact * c;
	
	printf("factorial of %d = %d \n", n, fact);
	
	return 0;
}
