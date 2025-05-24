#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=4,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d\t",i,j);
        sum=sum+(i*j);
        j=j+3;
    }
    printf("\nSum of series is %d",sum);
    return 0;
}