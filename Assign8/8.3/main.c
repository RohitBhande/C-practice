//title :: Write a program to find factorial of given number. 

#include<Header.h>


/*
	start
		Accept the number from user as no
		declare the one variable for counting the for
		perform multiplication of till the number and store the result in to anather varriable
		print the result
	END

*/
/*
Function Name: Factorial
Discribtion:: function Use to do factorial of number
input: Inteegr
Output::Integer
Author": Rohit Bhande
Date:: 06/08/2020

*/

int factorial(int iVal)
{

int iCount=0;
int iAns=1;


if (iVal< 0)
{
	iVal=-iVal;
}

for(int iCount=1;iCount<=iVal;iCount++)
	{
	iAns=iAns*iCount;
	}
	return iAns;
	
}
int main()
{
int iNo=0;
int iRet=0;

printf("enter the number\n");
scanf("%d",&iNo);

iRet = factorial(iNo);

printf("Factorial\n%d",iRet);

return 0;
}