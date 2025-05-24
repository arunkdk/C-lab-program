/*
 Write a program to perform various Arithmetic operations on the basics of operators
given by user using switch case.
*/

#include<stdio.h>
int main()
{
    float a,b,result;
    char ch;
    printf("Enter two values for operation:\n");
    scanf("%f%f",&a,&b);
    printf("Menu\n");
    printf("+.Addition\n");
    printf("-.Subtraction\n");
    printf("*.Multiplication\n");
    printf("/.Diviosn\n");
    printf("Enter your choice:");
    getchar();
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        result=a+b;
        break;
        case '-':
        result=a-b;
        break;
        case '*':
        result=a*b;
        break;
        case '/':
        result=a/b;
        break;
        default:
        printf("Invalid input");
        return 0;
    }
    printf("Result is %f",result);
    return 0;
}