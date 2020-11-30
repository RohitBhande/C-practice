/*   Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9)) 
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
Function Name: celsius
Discribtion:: To convert the killometer in meter.
input: float
Output::float
Author": Rohit Bhande
Date:: 07/08/2020


*/

//(1 celsius = (Fahrenheit -32) * (5/9))            (°F − 32) × 5/9
float celsius (float iVal)
{
	float fAns=0.0;

	//fAns =((1 - 32) * 5/9);

	return((iVal - 32) * 5/9);


}
int main()
{
	float fNo=0;
	float fRet=0;
	
	printf("Enter Fahrenheit tempreture\n");
	scanf("%f",&fNo);

	

	fRet =celsius(fNo);
	printf("%f\n",fRet );

	return 0;
}