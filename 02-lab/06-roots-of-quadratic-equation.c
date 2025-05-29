/*
Write a program to calculate the real roots of the quadratic equation ax2 + bx + c = 0. If
the roots are imaginary display the message “Error”.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float x1, x2;
    printf("Enter value of a, b and c from the quadratic equation:\n");
    scanf("%d%d%d", &a, &b, &c );
    if( (b*b - 4*a*c) < 0 )
    {
        printf("Error! Roots are imaginary.");
    }
    else
    {
        x1 = (-b - ( sqrt( b*b -4*a*c )))/2*a;
        x2 = (-b + ( sqrt( b*b -4*a*c )))/2*a;
        printf("The roots are: \n%f \n%f", x1, x2 );
    }
    return 0;
}