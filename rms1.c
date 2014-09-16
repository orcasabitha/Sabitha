/* root means square 
	Sabitha 16, sep 2014 */
	
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int j;
	int n;
	double sum = 0;
	float a;
	
	printf(" total numbers you want : \n");
	scanf(" %i", &n);
	
	printf(" enter the numbers:\n");
		
	for(j=1; j<=n; ++j)
	{
		scanf("%i", &j);
		sum += j * j;
	}
		
	a = sqrt(sum / n);
	
	printf("root is %f", a);
	
	return 0;
}
