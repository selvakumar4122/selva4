#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n=0,count=0,t=0,count1=0;
    printf("Enter the string :");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if((a[i]>='A'&&a[i]<='z'))
    count=1;
    else if(a[i]>=1||a[i]<=9)
    count1=1;
    else
    t=1;
    }
    if(count==1&&t==0&&count1==1)
    printf("yes");
    else
    printf("No");
}
