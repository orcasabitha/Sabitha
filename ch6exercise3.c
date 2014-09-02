/*Chapter 6 Exercise 3 
	Sabitha 1,sep 2014 */

#include <stdio.h>

int main(void)
{
    float f1;
	float f2;
	float total;
    
    printf("\nPlease enter the first integer: ");
    scanf("%f", &f1);
    printf("\nPlease enter the second integer: ");
    scanf("%f", &f2);
     
    total = f1 / f2;
    
    if(f2 > 0)
       printf("\n%.0f divided by %.0f gives %.3f\n", f1, f2, total);
    
    else   
       printf("\nCannot divide by zero.\n");

return 0;
} 
