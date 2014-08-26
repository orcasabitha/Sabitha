/* chapter-5 example-7
	Sabitha 26,August 2014 */
	
/* Greatest common divisor */

#include <stdio.h>

int main(void)
{
	int u;
	int v;
	int temp;
	
	printf("please type in two non negative integers.\n");
	scanf("%i%i", &u, &v);
	
	while(v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}
	printf("their greatest common divisor is %i\n", u);
	
	return 0;
}
