/*
Write a program to find the area of rectangle.
*/

#include<stdio.h>
int main()
{
    float length, breadth, area;
    printf("Enter lenght and breadth of recatangle:\n");
    scanf("%f%f",&length, &breadth);
    area = length * breadth;
    printf("The area of rectangle is %.2f", area ); 
    // %.2f only gives two digits after decimal, other 6 digits are shown after decimal
    return 0;
}