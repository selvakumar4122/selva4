#include<stdio.h>
void main()
{
    int a,b=1,rem=0;
    printf("Enter the value for a :");
    scanf("%d",&a);
    while(a!=0)
    {  
        b=a%10;
        rem=rem+b;
        a=a/10;
    }
    printf("The sum of digit in number is %d",rem);
}
