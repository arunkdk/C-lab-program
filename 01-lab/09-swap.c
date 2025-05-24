/*
Write a program to swap two variables.
*/

#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter values of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("Values before swapping:\na:%d\nb:%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Values after swapping:\na:%d\nb:%d",a ,b);
    return 0;
}
