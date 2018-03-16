#include<stdio.h>
void main()
{
    int n,m,t=1;
    printf("Enter the value for n :");
    scanf("%d",&n);
    printf("Enter the value for m :");
    scanf("%d",&m);
    t=n*m;
    if(t%2==0)
    printf("Even");
    else
    printf("Odd");
}
