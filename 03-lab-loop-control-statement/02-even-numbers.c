/*
Write a program to print even numbers between 20 to 200.
*/

#include<stdio.h>
int main() {
    printf("Even numbers between 20 to 200:\n");
    for(int i=21; i<200; i++) {
       if(i%2==0) {
            printf("%d\t",i);
       }
    }
    return 0;
}