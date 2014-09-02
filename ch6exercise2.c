/*Chapter 6 Exercise 2 
	sabitha 1, sep 2014 */

#include <stdio.h>

int main(void)
{
    int i1;
	int i2;
	int total = 0;
    
    printf("\nPlease enter the first integer: ");
    scanf("%i", &i1);
    
    printf("\nPlease enter the second integer: ");
    scanf("%i", &i2);
       
    if(i1 % i2 == 0) {
       printf("\n%i is evenly divisible by %i\n", i1, i2);
       total = i1 / i2;
       printf("%i / %i = %i\n", i1, i2, total);
       }
       
    else
       printf("\n%i is not evenly divisible by %i\n", i1, i2);

return 0;
}
