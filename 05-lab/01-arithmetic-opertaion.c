/*
Write a program to perform Arithmetic operation using switch case.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    float a,b,result;
    printf("Enter two values for operation:\n");
    scanf("%f%f",&a,&b);
    printf("Menu\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Diviosn\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        result=a+b;
        break;
        case 2:
        result=a-b;
        break;
        case 3:
        result=a*b;
        break;
        case 4:
        result=a/b;
        break;
        default:
        printf("Invalid input");
        exit(1);
    }
    printf("Result is %f",result);
    return 0;
}