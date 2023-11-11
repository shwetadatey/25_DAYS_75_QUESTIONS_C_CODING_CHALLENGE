#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Enter a to display uppercase alphabets.\n");
    printf("Enter l to display lowercase alphabets. \n");
    scanf("%c", &c);

    if (c == 'A' || c == 'a')
    {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } else if (c == 'L' || c == 'l')
    {
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    } else
    {
        printf("Error! You entered an invalid character.");
    }

    getch();
}

