/* chapter 8 exercise 2
	Sabitha 13,sep 2014 */
	
/* calculate triangular number */

#include <stdio.h>

int main(void)
{
	calnumber();
	
	return 0;
}

int calnumber(void)
{
	int n;
	int number;
	int counter;
	int triangularnumber = 0;

	for(counter = 1; counter <= 3; ++counter) {
		printf("enter the number: \n");
		scanf("%i", &number);
			
			for(n = 1; n<= number; ++n) 
				triangularnumber += n;
		printf("triangular number of %i is %i \n", number, triangularnumber);
	}
}
