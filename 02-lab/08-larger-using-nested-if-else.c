/*
Write a program to find largest among three numbers. (use nested-if else)
*/

#include<stdio.h>
int main() {
    float a, b, c;
    printf("Enter any three numbers:\n");
    scanf("%f%f%f", &a, &b, &c );
    if( a>=b ) {
        if( a>c ) {
            printf("a: %f is largest.", a);
        }
        else if( a==b && b==c ) {
            printf("All values are equal.");
        }
        else {
            printf("c: %f is largest.", c);
        }
    }
    else if( b>c ) {
        printf("b: %f is largest.", b);
    }
    else {
        printf("c: %f is largest.", c);
    }
    return 0;
}