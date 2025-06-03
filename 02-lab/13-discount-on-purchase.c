/*
Let's consider the supermarket discount policy: the policy offers a 5% discount on the total bill
to all customers, irrespective of their purchase amount. Additionally, female customers receive a
10% discount if their total bill exceeds Rs. 5000. Write a C program to implement this discount
policy and calculate the final bill after applying these discounts.
*/

#include<stdio.h>
int main()
{
    float totalBill, discount1, discount2;
    char gender;
    printf("Enter the total bill amount:\n");
    scanf("%f", &totalBill);
    discount1 = (5 * totalBill) / 100 ;         // all costumer get five percentage discount 
    getchar();                  // to flush the input buffer
    printf("Enter your gender( M|F):");     // taking the gender input
    scanf("%c", &gender);
    if( gender == 'f' || gender == 'F')
    {
        if( totalBill > 5000 )              // for ten percentage discout for female with purchase >5000
        {
            discount2 = ( 10 * totalBill ) / 100;
        }
        else 
        {
            discount2 = 0;
        }
    }
    totalBill = totalBill - discount1 - discount2;              // discount is subtracted from totalBill
    printf("Total bill amount after discount is %f", totalBill);
    return 0;
}