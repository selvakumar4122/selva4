#include<stdio.h>
void main()
{
    int a,i;
    printf("Enter the value for a :");
    scanf("%d",&a);
    for(i=0;i<10;i++)
    {
    if(a%2!=0)
    a--;
    }
    printf("The nearest even number is%d",a);
}
