//To find ASCII Value of a character
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    //%d display the inter value of character
    //%c display the actual character
    printf("ASCII value of %c = %d", c, c);

    getch();

}



