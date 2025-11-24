#include<stdio.h>
int main()
{
	int i, marks[6], per, sum=0;
	for(i=0;i<6;i++)
	{
		printf("enter sub %d+1",marks);
		scanf("%d", &marks[i]);
	}
	for(i=0;i<6;i++)
	{
		sum = sum + marks[i];
	}
	per = (sum/600.0)*100;
	printf("the total marks : %d\n", sum);
	printf("the percentage of marks : %d\n", per);
	return 0;
}
