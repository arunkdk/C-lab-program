/*
Write a program to input temperature in Celsius & to print its Fahrenheit equivalent.
*/

#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius:\n");
    scanf("%f",&celsius);
    fahrenheit = (celsius*180/100) + 32;
    printf("%f Celsisus is equivalent to %f Fahrenheit." ,celsius, fahrenheit );
    return 0;

}