#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value for a :");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
          printf("One");
          break;
        case 2:
          printf("Two");
          break;
        case 3:
          printf("Three");
          break;
        case 4:
          printf("four");
          break;
        case 5:
          printf("Five");
          break;
        case 6:
          printf("Six");
          break;
        case 7:
          printf("Seven");
          break;
        case 8:
          printf("Eight");
          break;
        case 9:
          printf("Nine");
          break;
        case 10:
          printf("Ten");
          break; 
        default:
          printf("Enter correct data");
    }
}
