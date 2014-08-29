/* chapter-5 exercise-9
	Sabitha 29,August 2014 */

/* nested while loops */

#include <stdio.h>

int main(void)
{
	int n = 1;
	int number;
	int triangularnumber = 0;
	int counter = 1;
	int i;
	
	printf(" enter number triangle numbers you want :\n");
	scanf("%i", &i);
	
	/* while loop begins */
	while(counter <= i) {
		
		printf("what triangular number do you want? ");
		scanf("%i", &number);
		
		++counter;
		
		while(n <= number) {
			triangularnumber += n;
			++n;
		}
		printf("triangular number %i is %i\n\n", number, triangularnumber);
	}
	
	return 0;
}


