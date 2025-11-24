//simple interest and compound interest
#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("enter the rate of interest");
	scanf("%f",&r);
	printf("enter the time period");
	scanf("%f",&t);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("the simple interest is %0.2f\n",si);
	printf("the compound interest is %0.3f",ci);
}

   	

