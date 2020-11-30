// Write a program which accept one number from user and check whether that number is greater than 100 or not. 

#include<Header.h>

BOOL ChkGrtNo( int iNo)
{
	if(iNo < 100)
	{
 		printf("Small\n");
 		return 0;
	}
	else 
	{
		printf("great\n");
		return 1;
	}
}

int main()
{

	int iNo=0;
	BOOL iRet= FALSE;

	printf("Enter The number\n");
	scanf("%d",&iNo);


//		ChkGrtNo(iNo);
	
	iRet = ChkGrtNo(iNo);

	if (iRet == FALSE)
	{
		printf("Enter Number is Small than 100\n");

	}
	 else
	{
		printf("Enter number is greater than 100\n");
	}

	return 0;
}