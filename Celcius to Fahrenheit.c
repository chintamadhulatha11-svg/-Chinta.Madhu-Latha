//Conversion of celsius scale temperature to fahrenheit scale temparature
#include<stdio.h>
main()
{
	float ctemperature,ftemperature;
	printf("enter temperature in celcius");
	scanf("%f",& ctemperature);
	ftemperature=1.8*ctemperature+32;
	printf("the temperature in fahrenheit scale is %f",ftemperature);
}

