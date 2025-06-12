/*
Write a program to find sum of n natural numbers.
*/

#include<stdio.h>
int main() {
    int n, sum=0;
    printf("Enter the number to find sum till that number:\n");
    scanf("%d",&n);
    for(int i=0; i<n+1; i++) {
        sum = sum + i;
    }
    printf("The sum of %d natural number is %d", n, sum);
    return 0;
}