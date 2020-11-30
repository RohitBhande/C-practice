 //Write a program to find even factorial of given number. 




#include <stdio.h>


/*
	Function Name: EvenFact
	discription: To find the even factorial
	input : integer
	output: integer
	Author: Rohit bhande
	Date : 09/08/2020
*/
int EvenFact(int iVal)
{
	int iCount=1;
	int iAns=1;

	if(iVal <0)
	{
		iVal=-iVal;
	}


	for(int iCount=1;iCount<=iVal;iCount++)
	{
		if(iCount%2 == 0)
		{
		iAns=iAns*iCount;	
		}
		
			
	}
	return(iAns);
}

/*
	START
	Accept the number from user as no1 
	declare the variable for counter and start from first no 
	find out even the facatorial in 

	print the number
	END
*/

int main()


{
	int iNo=0;
	int iRet=0;
	
	printf("Enter 1st numbers\n");
	scanf("%d",&iNo);
	

	iRet =EvenFact(iNo);
	printf("%d\n",iRet );

	return 0;
}