/*
Write a program to check the given number is odd or even.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d", &num);
    if( num%2 == 0 )
    {
        printf("%d is even",num);
    }
    else 
    {
        printf("%d is odd", num);
    }
    return 0;
}