/*  Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
*/
/*
START 
	Accept the number as no
	multiply the number by 1000
	
	print the result 
END
*/
#include<Header.h>
/*
Function Name: ConvertMeter
Discribtion:: To convert the killometer in meter.
input: float
Output::float
Author": Rohit Bhande
Date:: 07/08/2020


*/
int ConvertMeter(float iVal)
{


if(iVal<0)
{
	iVal=-iVal;
}
	return(iVal*1000);


}
int main()
{
	float fNo=0;
	
	int iRet=0;
	printf("Enter killometer\n");
	scanf("%f",&fNo);

	

	iRet =ConvertMeter(fNo);
	printf("%d\n",iRet );

	return 0;
}