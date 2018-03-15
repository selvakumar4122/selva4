#include<stdio.h>
void main()
{
    int a,b=1,rem=0;
    printf("Enter the value for a :");
    scanf("%d",&a);
    while(a!=0)
    {  
        b=a%10;
        rem=(rem*10)+b;
        a=a/10;
    }
    a=rem;
    while(a!=0)
    { 
        rem=a%10;
        printf("%d\t",rem);
        a=a/10;
    }
}
