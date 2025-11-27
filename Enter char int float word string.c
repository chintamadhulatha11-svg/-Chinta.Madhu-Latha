//write a simple program to read int, float, char and string using scanf() and dispaly using
//printf() in all the above given platforms.
#include<stdio.h>
#include<string.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x);
	printf("enter floating point number");
	scanf("%f",&y);
	printf ("enter a character");
    scanf("\n");
    scanf("%c",&ch);
	printf("enter a word");
	scanf("%s",s);
	printf("the integer is %d\n",x);
	printf("the floating ponit number is %f\n",y);
	printf("the character is %c\n",ch);
	printf("the string is %s\n",s);
}
