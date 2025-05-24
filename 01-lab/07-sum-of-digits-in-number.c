/*
Write a program to input 3 digit integer number and print sum of digits in it.
*/

#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while( n!=0 )
    {
        sum = sum + ( n % 10);
        n = n/10;
    }
    printf("The sum of digits of given number is %d", sum);
    return 0;
}