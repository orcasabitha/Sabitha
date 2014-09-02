/*Chapter 6 Exercise 4 
	Sabitha 1,sep 2014 */

#include <stdio.h>

int main(void)
{
    float accum = 0;
	float number = 0;
    char oper;
    
    printf("\nHello. This is a simple 'printing' calculator. Simply enter the number followed");
    printf(" by the operator that you wish to use. ");
    printf("It is possible to use the standard \noperators ( +, -, *, / ) as well as two extra "); 
    printf("operators:\n");
    printf("1) S, which sets the accumulator; and\n"); 
    printf("2) N, that ends  the calculation (N.B. Must place a zero before N). \n");
    
      do {
         printf("\nPlease enter a number and an operator: ");
         scanf("%f %c", &number, &oper);
           if(number == 0 && oper == 'N'){
              printf("Total = %f", accum);
              printf("\nEnd of calculations.");}
           else if(oper == '+', '-', '*', '/', 'S'){
                   switch(oper)
                   {
                     case 'S':
                      accum = number;
                      printf("= %f", accum);
                      break;
                     case '+':
                      accum = accum + number;
                      printf("= %f", accum);
                      break;
                     case '-':
                      accum = accum - number;
                      printf("= %f", accum);
                      break;
                     case '*':
                      accum = accum * number;
                      printf("= %f", accum);
                      break;
                     case '/':
                       if( number != 0)
                        {accum = accum / number;
                         printf("= %f", accum);}           
                       else
                        printf("Cannot divide by zero.");
                        break;
                      default:
                       printf("Error. Please ensure you enter a correct number and operator.");       
                       break;          
                    }     
                  }
                else
                 printf("Error. Please ensure you enter a correct number and operator.");      
         }
             while(oper != 'N');      
          
		  return 0;
}
