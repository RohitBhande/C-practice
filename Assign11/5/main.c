//Write a program which accept accept range from user and display all numbers in between that range in reverse order. 


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
	for(int iCount=iVal1;iCount>=iVal;iCount--)
	{
	
			printf("%d\t",iCount );
		
	}
}

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