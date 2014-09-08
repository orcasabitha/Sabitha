/* chapter 7, exercise 6
	Sabitha 4, sep 2014 */

/* fibonacci without array */
 
 #include <stdio.h>
 
 int main(void)
 {
 	int a = 0;
 	int b = 1;
 	int c;
 	int i;
 	
 	printf("%i\n%i\n", a, b);
 	for(i = 1; i <= 15; i++)
 	{
 		c = a + b;
 		printf("%i\n", c);
 		a = b;
 		b = c;
 	}
 }
