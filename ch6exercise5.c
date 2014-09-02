/*Chapter 6 Exercise 5 
	Sabitha 1,sep 2014 */

#include <stdio.h>

int main(void)
{
  	int number;
	int number2;
	int right_digit = 0;
  	char minus = '-';
  	
  	printf("Enter your number:\n");
  	scanf("%i", &number);
  	
  	if(number >= 0){
      do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while(number !=0);
      printf("\n");
    }
      
    else{ 
      number2 = number * -1;
      do {
        right_digit = number2 % 10;
        printf("%i", right_digit);
        number2 = number2 / 10;
      }
    
      while(number2 != 0);
      printf("%c", minus);  
      printf("\n");
      }
          
    return 0;
}
