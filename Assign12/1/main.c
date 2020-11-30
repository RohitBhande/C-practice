//Write a program which accept number from user and display below pattern. 


#include <stdio.h>


/*
	Function Name: DisPattern
	discription: To print the given pattern for multiple time
	input : integer
	output: none
	Author: Rohit bhande
	Date : 09/08/2020
*/
void DisPattern(int iVal)
{
	int iCount=0;
	int iAns=0;

	if(iVal <0)
	{
		iVal=-iVal;
	}


	for(int iCount=1;iCount<=iVal;iCount++)
	{
		printf("#\t");
		
	}
	for(int iCount=1;iCount<=iVal;iCount++)
	{
		printf("*\t");
		
	}
}

/*
	START
	Accept the number from user as no1 
	declare the variable for counter and start from first no which given by user till second number
	print the number
	END
*/

int main()


{
	int iNo=0;
	
	printf("Enter 1st numbers\n");
	scanf("%d",&iNo);
	

	DisPattern(iNo);

	return 0;
}