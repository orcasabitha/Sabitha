/* chapter-5 exercise-11
	Sabitha 29,August 2014 */
	
/* find the sum of its digits */

#include <stdio.h>
 
int main(void)
{
    int num;
	int temp;
	int digit;
	int sum = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &num);
    
	temp = num;
    
	while(num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
    
    return 0;
}
