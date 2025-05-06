#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i, fact=1;
    float sum=1;
    printf("Enter value of x and n:\n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {   
        fact=fact*i;
        sum=sum+(pow(x,i))/fact;
    }
    printf("Sum of series is %f",sum);
    return 0;

}