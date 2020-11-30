//Write a program which accept number from user and return the count of even digits.
#include<Header.h>

void CountEven(int iVal)
{
	int iCount=0;
	int iRes=0;

	while(iVal != 0)
	{
		iRes=iVal%10;
		if(iRes%2==0)
		{
			iCount++;

		}
		iVal=iVal/10;
	}
	printf("Even Countr\n%d",iCount);
}
int main()
{
	int  iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);

	CountEven(iNo);


	return 0;
}