/* chapter 8  exercise 7
	Sabitha 14,sep 2014 */
	
/* calculating power of a number */
 
 #include <stdio.h>
 
 void xpowern(int x, int n)
 {
 	int i;
 	int val = 1;
 	if( x < 0)
 	{
 		x = -x;
 	}
 	if( n < 0)
 	{
 		n = -n;
 	}
 	
 	for( i = 1; i <=n; i++ )
 	{
 		val *= x;
 	}
 	printf("%i\n", val);
 }
 int main(void)
 {
 	void xpowern(int x, int n);
 	xpowern(-4, -3);
	 
	 return 0;	
 }
