/*
Write a program to read a positive integer value and compute the following sequence. If
the number is even half it, if it is odd multiply it by 3 and add 1 and print the result. If
input value is less than 1 print the message containing the word “ERROR”.
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d", &n);
    if( n<1 )
    {
        printf("ERROR");
    }
    else if( n%2==0 )
    {
        n = n/2;
        printf("Result after operation is %d",n);
    }
    else 
    {
        n = n*3 + 1;
        printf("Result after operation is %d",n);
    }
    return 0;
}