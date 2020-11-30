//.Write a program which accept range from user and display all numbers in between that range. 

#include <stdio.h>

void DisNum(int iVal,int iVal1)
{
	int iCount=0;

	if(iVal <0)
	{
		iVal=-iVal;
	}


	if(iVal1 <0)
	{
		iVal1=-iVal1;
	}
	for(int iCount=iVal;iCount<=iVal1;iCount++)
	{
		if(iCount%2 == 0)
		{
			printf("%d\n",iCount );
		}
	}
}

int main()
/*START
	Accept the number from user as no1 and no2
	declare the variable for counter and start from first no which given by user till second number
	
	print the number
	END
	*/

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