/* chapter-5 example-9
	Sabitha 26,august 2014 */
	
/* reverse the digits using do while loop */

#include <stdio.h>

int main(void)
{
	int number;
	int rightdigit;
	
	printf(" enter your number.\n");
	scanf("%i", &number);
	
	do {
		rightdigit = number % 10;
		printf("%i", rightdigit);
		number = number / 10;
	}
	while(number != 0);
	
	printf("\n");
	
	return 0;
}
