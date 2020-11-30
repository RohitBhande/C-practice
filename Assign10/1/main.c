/* Write a program which accept radius of circle from user and calculate its area. 
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
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
Function Name: prntFiveMul
Discribtion:: To print all number to multiple .
input: Inteegr
Output::None
Author": Rohit Bhande
Date:: 06/08/2020


*/
float CircleArea(float iVal)
{


//int iCount=0;
float pie=3.14;

if(iVal<0)
{
	iVal=-iVal;
}
	return(pie*iVal*iVal);


}
int main()
{
	float fNo=0;
	float fRet=0;
	printf("Enter radious of circle\n");
	scanf("%f",&fNo);

	fRet =CircleArea(fNo);
	printf("%f\n",fRet );

	return 0;
}