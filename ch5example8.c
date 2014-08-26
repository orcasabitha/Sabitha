/* chapter-5 example-8
	Sabitha 26,August 2014 */
	
/* reversing the digits */

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
