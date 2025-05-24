/*
Write a program to calculate simple interest amount(SI) for deposit amount (P) kept in
bank for (t) years at the rate of (r) simple interest per annum.
*/

#include<stdio.h>
int main()
{
    float SI, P, t, r;
    printf("Enter Principal amount:\nTime:\nRate:\n");
    scanf("%f%f%f", &P, &t, &r);
    SI = (P*t*r)/100;
    printf("The simple interset is %.2f", SI );
    return 0;
}