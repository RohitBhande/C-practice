//Write a program which accept two numbers and check whether numbers are equal or not. 

#include<Header.h>


BOOL ChkEqual(int iNo1, int iNo2)
{
	if (iNo1 == iNo2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	BOOL iRet=FALSE;


	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);

	iRet=ChkEqual(iValue1,iValue2);

	if(iRet== TRUE)
	{
		printf("Same number\n");
	}
	else
	{
		printf("Differnt number\n");
	}



	return 0;
}	