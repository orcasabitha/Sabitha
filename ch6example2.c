/* chapter-6 example-2
	Sabitha 29,August 2014 */

/* Program to calculate the grades */

#include <stdio.h>
int main(void)
{
	int numberOfGrades;
	int i;
	int grade;
	int gradeTotal = 0;
	int failureCount = 0;
	float average;

	printf("How many grades will you be entering? ");
	scanf("%i", &numberOfGrades);

	for( i = 1; i <= numberOfGrades; ++i ) {
		printf("Enter grade #%i: ", i);
		scanf("%i", &grade);
		gradeTotal = gradeTotal + grade;

		if( grade < 65 )
		++failureCount;
	}
	average = (float) gradeTotal / numberOfGrades;
	
	printf("\nGrade average = %.2f\n", average);
	printf("Number of failures = %i\n", failureCount);

	return 0;
}
