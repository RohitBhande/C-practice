#include<stdio.h>

int divide(int no1,int no2)
{
	int iRslt=0;
	if(no2==0)
	{
		return -1;
	}
	iRslt= no1/no2;
	return iRslt;
	
}

int main()
{  
int iNo1=15;
int iNo2=3;
int iResult;

	printf("Entered 1st number::%d\n",iNo1);
	printf("Entered 2nd number::%d\n",iNo2);
	iResult = divide(iNo1,iNo2);	
	printf("Division of two number\n%d",iResult);
	
	return 0;
	
}