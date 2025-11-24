// sum of numbers using functions without arguments and with return type
#include<stdio.h>
int addition();
main()
{
	int result;
	result=addition();
	printf("the result is %d", result);
}
int addtion()
{
	int a, b, c;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
