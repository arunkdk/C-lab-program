/*
WAP to find the sum of series.
1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 +. . . + n^2
*/ 

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int  sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + pow(i,2);       // Reminder, pow() function returns double data type.
    }
    printf("Sum of square of %d natural number is %d",n,sum);
    return 0;
}

/*
if normal compilation does not work, use this:
gcc 17type3.c -o 17type3 -lm
Here -lm flag tells linker to link the file to the libm, where the real implementations of the 
math functions reside.
libm is math library.
*/