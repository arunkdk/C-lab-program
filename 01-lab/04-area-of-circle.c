/*
Write a program to read the radius of circle and find its area.
*/

#include<stdio.h>
#define PI 3.1415   // defines constant, when ever we use PI now 3.1415 is used in this program
int main()
{
    float radius, area;
    printf("Enter radius of circle:\n");
    scanf("%f", &radius);
    area = PI * radius * radius;    
    printf("The area of circle is %.2f", area);
    return 0;
}