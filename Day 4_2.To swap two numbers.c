//Program to swap two numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    double first,second,temp;
    printf("Enter the first number:\n");
    scanf("%lf",&first);
    printf("Enter the second number:\n");
    scanf("%lf",&second);

    temp=first;
    first=second;
    second=temp;
    printf("After swapping, first number will be= %.2lf\n",first);
    printf("After swapping, second number will be= %2.lf\n",second);


  getch();
}
