/*
WAP to print the following pattern,
                                1
                        2       2
                3       3       3
        4       4       4       4
5       5       5       5       5
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
            printf("%d\t",i);
        }
        printf("\n");
    }
    return 0;
}