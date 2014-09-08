/* chapter 7, exercise 7
	Sabitha 4, sep 2014 */
	
/* Prime numbers generated with Sieve of Erasthothenes  */

#include <stdio.h>

int main (void)  
{  
	int  P[151];
	int i;
	int j;  
	int  n = 150;  
	
	for (i = 2; i <= n; ++i)  
	    P[i] = 0;  

    i = 2;  
	  
    while (i <= n) {  
      if (P[i] == 0)  
         printf ("%i  ", i);  

      j = 1;  
 
      while (i * j <= n) {  
           P[i * j] = 1;  
	       ++j;  
	  }  
	  ++i;  
	 }  
	  
     return 0;  
}  

