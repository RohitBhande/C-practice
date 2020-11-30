// Write a program which accept N and print first 5 multiples of N. 

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
void prntFiveMul(int iVal)
{


int iCount=0;

if(iVal<0)
{
	iVal=-iVal;
}
	
for(int iCount=1;iCount<=5;iCount++)
{

		printf("%d\t",(iVal*iCount));
	
}



}
int main()
{
	int iNo=0;
	printf("Enter The number\n");
	scanf("%d",&iNo);

	prntFiveMul(iNo);

	return 0;
}