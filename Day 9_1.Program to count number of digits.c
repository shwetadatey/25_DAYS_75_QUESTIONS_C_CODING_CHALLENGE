#include<stdio.h>
#include<conio.h>
void main()
{
 long long n;
 int count=0;
 printf("Enter an integer:\n");
 scanf("%lld",&n);

 do
 {
 n/=10;
 ++count;
 }
while(n!=0);
printf("Number of digits=%d\n",count);

getch();

}
