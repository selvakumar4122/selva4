#include<stdio.h>
void main()
{
  int n,a=0,b=1,c=0,i;
  printf("Enter the number :");
  scanf("%d",&n);
  printf("Fibonacci series is :\n");
  for(i=0;i<n;i++)
  {
    c=a+b;
    printf("%d\n",c);
    b=a;
    a=c;
 }
}
