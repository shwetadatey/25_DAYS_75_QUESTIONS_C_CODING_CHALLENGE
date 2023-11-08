#include<stdio.h>
#include<conio.h>
void main()
{

double a,b,c;
printf("Enter any three numbers: \n");
scanf("%lf %lf %lf",&a,&b,&c);

if(a>b && a>c)
printf("%lf is the largest number.\n",a);

if(b>a && b>c)

printf("%lf is the largest number.\n",b);

if(c>a && c>b)

printf("%lf is the largest number.\n",c);

else
printf("All numbers are equal.\n");
getch();

}
