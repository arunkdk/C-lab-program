/*
Write a program to find maximum among two numbers.
*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two values:\n");
    scanf("%d%d", &a, &b );
    if( a>b)
    {
        printf("%d is greates.",a);
    }
    else if( a<b )
    {
        printf("%d is greatest.",b);
    }
    else 
    {
        printf("Both are equal.");
    }
    return 0;
}