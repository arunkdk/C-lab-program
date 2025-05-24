/*
Write a menu driven program to work following cases, take appropriate input
whenever required.
1. Reverse a number
2. Find sum of individual unit
3. Display all ASCII characters from 0 to 255
4. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ch,sum=0,rev=0,rem,i;
   while(1)
   {
     printf("Menu\n");
    printf("1.Reverse a number\n");
    printf("2.Find sum of individual unit\n");
    printf("3.Display all ASCII characters from 0 to 255\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter value of n:");
        scanf("%d",&n);
        rev=0;
        for(i=1;n>0;i++)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        printf("Reversed number is %d \n",rev);
        break;
        case 2:
        printf("Enter a number:\n");
        scanf("%d",&n);
        sum=0;
        for(i=0;n>0;i++)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf("Sum of individual unit is %d\n",sum);
        break;
        case 3:
        printf("ASCII value from 0 to 255");
        for(i=0;i<=255;i++)
        {
            printf("%c\n",i);
        }
        break;
        case 4:
        exit(1);
        default:
        printf("Invalid input\n");
        break;
    }
   }
    return 0;
}
