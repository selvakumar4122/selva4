#include<stdio.h>
void main()
{
  int n,a=0,b=1,c=0,i;
  printf("Enter the number :");
  scanf("%d",&n);
  printf("Fibonacci series is :\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",c);
    c=a+b;
    b=a;
    a=c;
 }
}
