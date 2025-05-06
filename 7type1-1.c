/*
WAP to print the following pattern,
1
11      21
31      41      51
61      71      81      91
101     111     121     131     141
*/

#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",a);
            a+=10;
        }
        printf("\n");
    }
    return 0;
}