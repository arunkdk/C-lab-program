/*
Write a program to find out the grade of a student. When the marks of four subjects are given, assign grade as
per the table below:
Percentage	Grade
More than or equal to 85	A
Less than 85 or more than or equal to 70	B
Less than 70 or more than or equal to 55	C
Less than 55 or more than or equal to 45	D
Less than 45 or more than or equal to 32	E
Less than 32	F
*/

#include<stdio.h>
int main()
{
	float sub1, sub2, sub3,  sub4, per;
	printf("Enter marks of sub1:");
	scanf("%f",&sub1);
	printf("Enter marks of sub2:");
	scanf("%f",&sub2);
	printf("Enter marks of sub3:");
	scanf("%f",&sub3);
	printf("Enter marks of sub4:");
	scanf("%f",&sub4);
	per=(sub1+sub2+sub3+sub4)*0.25;
	if(per>=85)
	{
		printf("A");
	}
	else if( per>=70)
	{
		printf("B");
	}
	else if (per>=55)
	{
		printf("C");
	}
	else if (per>=45)
	{
		printf("D");
	}
	else if (per>=32)
	{
		printf("E");
	}
	else
	{
		printf("F");
	}
	printf("\n");
	return 0;
}
