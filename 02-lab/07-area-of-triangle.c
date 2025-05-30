/*
Write a program to read three sides of triangle and print area for valid data and to print
“Invalid data” if either one side of the triangle is greater or equals to the sum of other two
sides
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the length of three sides of triangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a+b+c)/2;
    if( (a+b)<c || (a+b)==c || (b+c)<a || (b+c)==a || (a+c)<b || (a+c)==b )
    {
        printf("Invalid Inputs!");
        exit(1);
    }
    else
    {
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%f is the area of the triangle.", area);
    }
    return 0;
}