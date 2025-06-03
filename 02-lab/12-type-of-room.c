/*
Write a program to read length and breadth of a room and print area and classification:
“Auditorium” if area > 2500
“Hall” if 500 < area ≤ 2500
“Big room” if 150 < area <= 500
“Small room” if area ≤ 150
*/

#include<stdio.h>
int main()
{
	float l, b, area;
	printf("Enter length:");
	scanf("%f",&l);
	printf("Enter breadth:");
	scanf("%f",&b);
	area=l*b;
	if(area<=150)
	{
		printf("Small room");
	}
	else if (area<500)
	{
		printf("Big room");
	}
	else if (area<=2500)
	{
		printf("Hall");
	}
	else 
	{
		printf("Audiotorium");
	}
	return 0;
}
