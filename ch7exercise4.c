/* chapter 7, exercise 4
	Sabitha 4, sep 2014 */
	
/* working with arrays, avg of ten float arrays */

#include <stdio.h>

int main(void)
{
	float values[10];
	int index;
	float value;
	float avg;
	
	for( index = 0; index < 10; ++index )
	{
	values[index] = 0;
	printf("values[%i] = %f\n\n", index, values[index]); 
	printf("enter the value\n");
	scanf("%f", &values[index]);
	printf("values[%i] = %f\n", index, values[index]);
	}
	
	value = 0;
	for( index = 0; index < 10; ++index )
	{
		value += values[index];
		avg = value / 10;
	}
	printf("%f\n", avg);
	
	
	return 0;
}
