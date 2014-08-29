/* chapter-5 exercise-10
	Sabitha 29,August 2014 */
	
/* reversing the digits (type negative number) */

#include <stdio.h>

int main(void)
{
	int number;
	int rightdigit;
	
	printf(" enter your number. \n");
	scanf("%i", &number);
	
	while(number != 0) {
		rightdigit = number % 10;
		printf("%i", rightdigit);
		number = number / 10;
	}
	printf("\n");
	
	return 0;
}
