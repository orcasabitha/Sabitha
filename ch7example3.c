/* chapter 7 example 3
	Sabitha 2,sep 2014 */
	
/* Program to generate the first 15 Fibonacci numbers */

#include <stdio.h>
int main(void)
{
	int Fibonacci[15];
	int i;

	Fibonacci[0] = 0; // by definition
	Fibonacci[1] = 1; // ditto
	
	for( i = 2; i < 15; ++i )
	Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
	
	for( i = 0; i < 15; ++i )
	printf("%i\n", Fibonacci[i]);

	return 0;
}
