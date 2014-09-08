/* chapter 8, example 3
	Sabitha 6, sep 2014 */
	
/* More on Calling Functions */

#include <stdio.h>

void printMessage(void)
{
	printf("Programming is fun.\n");
}

int main(void)
{
	int i;
	
	for( i = 1; i <= 5; ++i )
	printMessage();

	return 0;
}
