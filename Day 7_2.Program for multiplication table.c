//Program for multiplication table
#include<stdio.h>
#include<conio.h>
void main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  getch();
}
