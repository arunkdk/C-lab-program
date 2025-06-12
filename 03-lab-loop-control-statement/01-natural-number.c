/*
Write a program to print 100 natural numbers.
*/

#include<stdio.h>
int main() {
    printf("Natural numbers form 1 to 100:\n");
    for(int i=1; i<101; i++) {
        printf("%d\t",i);
    }
    return 0;
}