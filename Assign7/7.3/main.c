//Write a program which accept number from user and return the count of in range digits.
#include<Header.h>

void Count3to7(int iVal)
{
	int iCount=0;
	int iRes=0;

	while(iVal != 0)
	{
		iRes=iVal%10;
		if(iRes >3 && iRes <7)
		{
			iCount++;

		}
		iVal=iVal/10;
	}
	printf("Odd Countr\n%d",iCount);
}
int main()
{
	int  iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);

	Count3to7(iNo);


	return 0;
}