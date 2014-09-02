/* chapter 7 example 4
	Sabitha 2,sep 2014 */
	
/* Revising the Program to Generate Prime Numbers */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p;
	int i;
	int primes[50];
	int primeIndex = 2;
	bool isPrime;
	
	primes[0] = 2;
	primes[1] = 3;

	for( p = 5; p <= 50; p = p + 2 ) {
	isPrime = true;
		
		for( i = 1; isPrime && p / primes[i] >= primes[i]; ++i )
			if( p % primes[i] == 0 )
				isPrime = false;
			if( isPrime == true ) {
				primes[primeIndex] = p;
				++primeIndex;
			}
	}
	
	for( i = 0; i < primeIndex; ++i )
	printf("%i ", primes[i]);
	
	printf("\n");
	
	return 0;
}
