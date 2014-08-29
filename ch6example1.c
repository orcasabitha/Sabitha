/* chapter-6 example-1
	Sabitha 29,August 2014 */

/* Program to calculate the absolute value of an integer */

#include <stdio.h>

int main(void)
{
	int number;
	
	printf("Type in your number: ");
	scanf("%i", &number);

	if( number < 0 )
	number = -number;

	printf("The absolute value is %i\n", number);
	
	return 0;
}
