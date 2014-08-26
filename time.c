#include <stdio.h>

int main(void)
{
	int i;
	int sec;
	int min;
	int a;
	int hr1;
	
	printf("enter the number:\n");
	scanf("%i", &i);

		a = i / 60;
		hr1 = a / 60;
		min = a % 60;
		sec = i % 60;
	
		printf("\n %i : %i : %i\n", hr1, min, sec);
	
	
}
