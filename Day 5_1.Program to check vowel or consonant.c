#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int uppercase_vowel, lowercase_vowel;
printf("Enter an alphabet:\n");
scanf("%c",&c);

lowercase_vowel = (c == 'a'|| c == 'e'|| c == 'i' || c == 'o' || c == 'u');

uppercase_vowel = (c == 'A' || c == 'E' || c =='I' || c== 'O' || c == 'U' );

if(lowercase_vowel || uppercase_vowel)

printf("%c is vowel.\n",c);

else
printf("%c is consonant.\n",c);

getch();

}
