/*
WAP to print the following pattern,
                                *
                        *       *
                *       *       *
        *       *       *       *
*       *       *       *       *
*/

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=4;k>=i;k--)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}