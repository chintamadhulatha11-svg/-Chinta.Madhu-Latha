//maximum of two numbers using conditional operator(?:)
#include<stdio.h>
main()
{
	int a,b,max;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	printf("The maximum number is %d",max);
}
	

