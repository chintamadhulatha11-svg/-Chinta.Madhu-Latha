//program to find sum of numbers using functions with arguments without return type
#include<stdio.h>
void addition(int,int);
main()
{
	int a, b;
	printf("enter a and b values");
	scanf("%d%d",&a, &b);
	addition(a, b);
}
void addition(int p, int q)
{
	int result;
	result=p+q;
	printf("the reuslt is %d", result);
}
