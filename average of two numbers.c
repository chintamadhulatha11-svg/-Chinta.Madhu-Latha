//PROGRAM TO FIND AVERAGE OF TWO NUMBERS
#include<stdio.h>
main()
{
	float num1, num2, average;
	printf("enter num1");
	scanf("%f", &num1);
	printf("enter num2");
	scanf("%f", &num2);
	average = (num1 + num2) / 2;
	printf("The average of %.2f and %.2f is: %.2f\n", num1, num2, average);
}
