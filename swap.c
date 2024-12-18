#include<stdio.h>
void main()
{
    int n,m,t=0;
    scanf("%d",&n);
    scanf("%d",&m);
    t=n;
    n=m;
    m=t;
    printf("%d\t%d",n,m);
    printf("Thank you");
}
