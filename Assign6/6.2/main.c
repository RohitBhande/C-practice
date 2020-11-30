
// title :: Write a program which accept number from user and check whether it contains 0 in it or not. 
#include<Header.h>
/*
		start 
			accept the number as no
			check the no by moderating the no by 10
			and ckeck the remainder if this is zero then it print the increament the counter




*/
BOOL ChkZero(int iNo)
{
	//int iCnt=0;
	int iVal=0;

	if (iNo==0)
	{
		return FALSE;
	}

	while(iNo !=0)
	{
		if(iNo%10==0)
		{
			//return FALSE;
			break;

		}	
		else
		{
		
		iNo=iNo/10;
		}
		
	}

}
int main()
{

	int iVar=0;
	BOOL iRet= FALSE;

	printf("Enter the number\n");
	scanf("%d",&iVar);

	iRet= ChkZero(iVar);

	if (iRet == TRUE)
	 	{
		printf("zero not there\n");
		}
	else
		{
			printf("Zero is  there\n");
		}

		return 0;
}