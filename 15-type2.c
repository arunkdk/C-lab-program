/*
WAP to print the following pattern,
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}