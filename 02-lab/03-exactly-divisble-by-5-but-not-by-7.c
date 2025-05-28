/*
Write a program to check the given number is exactly divisible by 5 but not 7.
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if( n%5 == 0 & n%7 !=0 )
    {
        printf("%d is exactly divisible by 5 but not by 7.",n);
    }
    else
    {
        printf("Given condition does not match.");
    }
    return 0;
}