/* chapter 8 example 11
	Sabitha 8, sep 2014 */
	
/* changing array elements in functions */

#include <stdio.h>

void multiplyby2(float array[], int n)
{
	int i;
	
	for(i = 0; i < n; ++i)
		array[i] *= 2;
}

int main(void)
{
	float floatval[4] = { 1.2f, -3.7f, 6.2f, 8.55f};
	int i;
	
	void multiplyby2(float array[], int n);
	
	multiplyby2(floatval, 4);
	
	for(i = 0; i < 4; ++i)
		printf("%.2f    ", floatval[i]);
		
	printf("\n");
	
	return 0;
}
