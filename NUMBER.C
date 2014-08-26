
/* mobile number generated
	Sabitha 26,August 2014 */

#include <stdio.h>

int main(void)
{
	long long int number = 9444100000; 
	long long int i;
	
	printf(" \n\n enter the values of i:\n");
    scanf("%lli", &i);

	for( i=1; i<=99999; i++)
	{
	number = number + 1;
	printf("\n number =%lli\n", number);
	}

	return 0;
}
