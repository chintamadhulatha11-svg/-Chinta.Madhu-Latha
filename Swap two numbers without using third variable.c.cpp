//Swap two numbers without using third variable 
#include<stdio.h>
main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d,b=%d\n",a,b);
	//swap without third variable
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d,b=%d\n",a,b);
}

