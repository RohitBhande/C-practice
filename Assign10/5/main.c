/*    Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter) 
*/
/*
START 
	Accept the number as no
	multiply the number by 0.0929
	
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

//(1 square feet = 0.0929 Square meter) 
float SquareMeter (float iVal)
{
	float fAns=0.0;


	return(iVal * 0.0929);


}
int main()
{
	float fNo=0;
	float fRet=0;
	
	printf("Enter square feet tempreture\n");
	scanf("%f",&fNo);

	

	fRet =SquareMeter(fNo);
	printf("%f\n",fRet );

	return 0;
}