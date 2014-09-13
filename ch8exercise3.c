/* chapter 8 exercise 3
	Sabitha 13,sep 2014 */
	
/* Function to calculate the absolute value of a number */
#include <stdio.h>

float absoluteValue(float x)
{
	if( x < 0 )
	x = -x;
	
	return(x);
}

/* Function to compute the square root of a number */

float squareRoot(float x, float epsilon)
{
	float guess = 5;
	while( absoluteValue (guess * guess - x) >= epsilon )
	guess = ( x / guess + guess ) / 2.0;
	
	return guess;
}

int main(void)
{
	printf("squareRoot (2.0) = %f\n", squareRoot (2.0, 6));
	printf("squareRoot (144.0) = %f\n", squareRoot (144.0, 0.007));
	printf("squareRoot (17.5) = %f\n", squareRoot (17.5, 40));
	
	return 0;
}
