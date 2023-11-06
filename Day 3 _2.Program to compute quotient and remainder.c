//program to compute quotient and remainder
#include <stdio.h>
#include <conio.h>
void main()
{
   int dividend,divisor,quotient,remainder;
   printf("Enter the dividend:\n");
   scanf("%d",&dividend);
   //to find divisor
   printf("Enter the divisor:\n");
   scanf("%d",&divisor);66776666
   //to display the quotient
   quotient=dividend/divisor;
   printf("Quotient=%d\n",quotient);
   remainder=dividend%divisor;
   printf("Remainder=%d\n",remainder);
   getch();
}
