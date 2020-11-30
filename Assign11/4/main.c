//.Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only) 

#include <stdio.h>

void DisNum(int iVal,int iVal1)
{
	int iCount=0;
	int iAns=0;

	if(iVal <0)
	{
		iVal=-iVal;
	}


	if(iVal1 <0)
	{
		iVal1=-iVal1;
	}
	for(int iCount=iVal;iCount<=iVal1;iCount++)
	
	if(iCount % 2 == 0)
		{
			
			iAns=iAns+iCount;
		
	}
	printf("%d\n",iAns );
}

/*
	START
	Accept the number from user as no1 and no2
	declare the variable for counter and start from first no which given by user till second number
	check the number if no is complet divisible by 2 then add number to the number
	print the number
	END
*/

int main()


{
	int iNo=0;
	int iNo1=0;
	printf("Enter 1st numbers\n");
	scanf("%d",&iNo);
	printf("Enter 2nd numbers\n");
	scanf("%d",&iNo1);

	DisNum(iNo,iNo1);

	return 0;
}