#include<stdio.h>
void main()
{
  int x,y,z;
  printf("Enter the value of x:");
    scanf("%d",&x);
  printf("Enter the value of y:");
    scanf("%d",&y);
     x=x^y;
     y=x^y;
     x=x^y;
  printf("The values after swap: %d %d",x,y);
}
