/*
Write a program to find largest among four numbers.
*/

#include<stdio.h>
int main() {
    float a, b, c, d;
    printf("Enter any four numbers:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d );
    if( a>b && a>c && a>d ) {
        printf("a: %f is greatest.", a);
    }
    else if( b>c && b>d ) {
        printf("b: %f is greatest.", b);
    }
    else if( c>d ) {
        printf("c: %f is greatest.", c);
    }
    else if( d>c )
    {
        printf("d: %f is greatest.", d);
    }
    else {
        printf("All values are equal.");
    }
    return 0;
}