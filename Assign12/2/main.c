 //Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.




#include <stdio.h>


/*
	Function Name: currency
	discription: To multiply the number with the current value
	input : integer
	output: integer
	Author: Rohit bhande
	Date : 09/08/2020
*/
int currency(int iVal)
{
	int iCount=0;
	int iAns=0;

	if(iVal <0)
	{
		iVal=-iVal;
	}


	
		return( iVal * 70);
		

	
}

/*
	START
	Accept the number from user as no1 
	
	multiply the given number with the 70

	print the number
	END
*/

int main()


{
	int iNo=0;
	int iRet=0;
	
	printf("Enter 1st numbers\n");
	scanf("%d",&iNo);
	

	iRet =currency(iNo);
	printf("%d\n",iRet );

	return 0;
}