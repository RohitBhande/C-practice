/*  Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height) 
*/
/*
START 
	Accept the number as no
	Declare one variable For Counter in iteration
	multiply the number five time
	print the number 
END
*/
#include<Header.h>

/*
Function Name: RectArea
Discribtion:: To calculate rectangle area .
input: Inteegr
Output::integer
Author": Rohit Bhande
Date:: 07/08/2020


*/
float RectArea(float iVal,float iVal1)
{
if(iVal<0)
{
	iVal=-iVal;
}
	return(iVal*iVal1);


}
int main()
{
	float fNo=0;
	float fNo1=0;
	float fRet=0;
	printf("Enter Width  of circle\n");
	scanf("%f",&fNo);

	printf("Enter Height of circle\n");
	scanf("%f",&fNo1);

	fRet =RectArea(fNo,fNo1);
	printf("%f\n",fRet );

	return 0;
}