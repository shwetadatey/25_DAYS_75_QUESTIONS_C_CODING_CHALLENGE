//Program to find factorial of a number
#include <stdio.h>
#include<conio.h>
void main() {
    int a, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &a);


    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= a; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", a, fact);
    }

    getch();
}
