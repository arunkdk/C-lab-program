/*
Write a program to input 4 digit integer number and print it in reverse order
(e.g. 674 => 476)
*/

#include<stdio.h>
int main()
{
    int n, rev=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while( n!=0)
    {
        rev = (rev*10) + (n%10);
        n = n/10;
    }
    printf("The reverse of given number is %d", rev);
    return 0;
}