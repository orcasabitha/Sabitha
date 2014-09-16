/* program to calculate the cgpa 
 	Sabitha, september 2014 */
 
 #include <stdio.h>
 
 int main(void)
 {
 	int cgpaval[10];
 	int n;
 	int credit[10];
 	float average;
 	int sumofcredits;
 	float total = 0.0;
 	int i;
 	
 	printf("enter the number of subjects\n");
 	scanf("%i", &n);
 	
 	printf("enter cgpa(1to10) and credits\n");
 	for(i = 0; i < n; i++)
 	{
 		scanf("%i:%i", &cgpaval[i], &credit[i]);
 	}
 	printf("cgpa......credit\n");
 	for(i = 0 ; i < n; i++)
 	{
 		printf("%i         %i\n", cgpaval[i], credit[i]);
 	}
 	
 	for(i = 0; i < n; i++)
 	{
 		sumofcredits = sumofcredits + credit[i];
 	}
 	printf("credits = %i\n", sumofcredits);
 	
 	for(i = 0 ;i < n; i++)
 	{
 		total = total + (cgpaval[i] * credit[i]);
 	}
 	
 	average = (total / sumofcredits) * 10;
 	
 	printf("*******your percentage is %.2f", average);
 	
	return 0;
 }
