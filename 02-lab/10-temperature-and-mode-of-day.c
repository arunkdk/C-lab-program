/*
Write a program to read a temperature of a day in Fahrenheit and print
“Nice day” if temperature is greater than 60 but less than 80.
“Cold day” if temperature is 60 or lower.
“Hot day” if temperature is 80 or higher.
*/

#include<stdio.h>
int main() {
    float temp;
    printf("Enter the temperature of day in Fahrenheit:\n");
    scanf("%f", &temp );
    if( temp <= 60 ) {
        printf("Cold day");
    }
    else if( temp >=80 ) {
        printf("Hot day");
    }
    else {
        printf("Nice day");
    }
    return 0;
}