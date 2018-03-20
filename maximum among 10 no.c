#include<stdio.h>
void main()
{
  int i,a[10],max=0;
  printf("Enter the number :");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
    if(a[i]>max)
     {
    max=a[i];
     }
    }
    printf("The gratest number is : %d",max);
 }
