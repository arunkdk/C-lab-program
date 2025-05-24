/*
Write a menu driven program to work following cases, take appropriate input
whenever required.
1. find sum of n natural numbers
2. Conversion of ASCII code to char
3. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ch,sum=0,i;
   while(1)
   {
     printf("Menu\n");
    printf("1.Sum of n natural number\n");
    printf("2.Conversion of ASCII code to char\n");
    printf("3.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter value of n:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("Sum of %d natural number is %d\n",n,sum);
        break;
        case 2:
        printf("Enter a ASCII value:");
        scanf("%d",&n);
        printf("%c is char with ASCII value %d\n",n,n);
        break;
        case 3:
        exit(1);
        default:
        printf("Invalid input");
        return 0;
    }
   }
    return 0;
}
