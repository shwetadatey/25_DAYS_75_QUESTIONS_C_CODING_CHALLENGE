//Program to find H.C.F of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1, n2, i, hcf;

    printf("Enter two integers: \n");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            hcf = i;
    }

    printf("H.C.F. of %d and %d is %d\n", n1, n2, hcf);

    getch();
}
