#include<stdio.h>
#include<conio.h>
void main()
{
    float s,r,t,p;
    printf("Enter the principal amount,rate of interest, time period :\n");
    scanf("%f%f%f",&p,&r,&t);
    s=(p*r*t)/100;
    printf("Simple interest is= %f\n",s);
    getch();
}
