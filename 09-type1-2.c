/*
WAP to print following pattern,
                                1
                        1       2
                1       2       3
        1       2       3       4
1       2       3       4       5
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
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}