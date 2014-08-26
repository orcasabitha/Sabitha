
/* mobile number generated
	Sabitha 26,August 2014 */

#include <stdio.h>

int main(void)
{
	long long int number = 9444100000; 
	long long int i;
	long long int j;
	
	printf(" \n\n enter the values of i:\n");
    scanf("%lli", &i);

	for( j=1; j<=i; j++)
	{
	number = number + 1;
	printf("\n number =%lli\n", number);
	}

	
	return 0;
}
