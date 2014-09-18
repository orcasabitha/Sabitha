/* chapter 8 exercise 8
	Sabitha 13,sep 2014 */
	
/* quadratic equation */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	int b;
	int c;
	float x1;
	float x2;
	float dis;
	
	printf(" enter a value :\n");
	scanf("%i", &a);
	
	printf(" enter b value : \n");
	scanf("%i", &b);
	
	printf(" enter c value : \n");
	scanf("%i", &c);
	
	dis = (b * b) - 4 * a * c;
	
	if(dis <= 0)
		printf( "roots are imaginary \n");
	
	else if(a == 0)
		printf(" root is zero");
		
	else
	{
		x1 = (- b + sqrt(dis)) / (2 * a);
		x2 = (- b - sqrt(dis)) / (2 * a);
		
		printf( "the value of x1 is %f ", x1);
		printf("the value of x2 is %f", x2);
	}
	return 0;
}
