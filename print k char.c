#include <stdio.h>
#include<string.h>
void main()
{
  int k,i;
  char s[100];
  printf("Enter the string:");
  scanf("%s",&s);
  printf("enter how many character to print:");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  printf("%c",s[i]);
}
  
