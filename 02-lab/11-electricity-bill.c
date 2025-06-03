
/*
An electricity board charges according to following rates:
For the first 20 units – Rs.80
For the next 80 units – Rs.7.5 per unit
For the next 100 units – Rs.8.5 per unit
For the beyond 200 units – Rs.9.5 per unit
Tax 15% in total amount is charged to all users.
Write a program to read number of units consumed and print out the total charge.
*/

#include<stdio.h>
int main()
{
	float tax, net_charge, charge, unit;
	printf("Enter unit:");
	scanf("%f",&unit);
	if( unit<=20)
	{
		charge=80;
	}
	else if( unit>20 && unit<=100)
	{
		charge=80 + (unit-20)*7.5;
	}
	else if( unit>100 && unit<=200)
	{
		charge= 80 + 80*7.5 + (unit-100)*8.5;
	}
	else
	{
		charge= 80 + 80*7.5 + 100*8.5 + (unit-200)*9.5;
	}
	tax=(15*charge)/100;
	net_charge=charge+tax;
	printf("Total charge is %.2f", net_charge);
	return 0;
}
