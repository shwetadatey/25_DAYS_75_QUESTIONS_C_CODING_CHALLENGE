#include <stdio.h>
#include <conio.h>
void main()
{
  int intType;
  float floatType;
  char charType;
  double doubleType;
  //to evaluate the size of datatypes
  printf("Size of int: %zu bytes\n",sizeof(intType));
  printf("Size of float: %zu bytes\n",sizeof(floatType));
  printf("Size of char: %zu bytes\n",sizeof(charType));
  printf("Size of double: %zu bytes\n",sizeof(doubleType));
  getch();
}
