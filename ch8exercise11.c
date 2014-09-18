/* chapter 8 exercise 11
	Sabitha 17,sep 2014 */
	
/* arraysum function */

#include <stdio.h> 

int main(void)
{
	int val[] = {2,3,4,5,6,7,6};
	array_sum(val,7);
	printf("%i", sum);
}	

int array_sum (int  values [], int  n)  
	{  
	    int       i;  
	    int  sum = 0;  
  
	    for ( i = 0;  i < n;  ++i )  
	        sum += values[i];  
  
	    return sum;  
	    
	}  

