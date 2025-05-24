#include<math.h>
#include<stdio.h>
int main()
{
    int n,x,i;
    float sum=0;
    printf("Enter the value of x and n:\n");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+(1/pow(x,i));
    }
    printf("Sum of series is %f",sum);
    return 0;
}