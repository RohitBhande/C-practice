//Write a program which accept number from user and return the count of even digits.
#include <Header.h>

void ClaculateMul(int iVal)
{
	int iCount=1;
	int iRes=0;

	while(iVal != 0)
	{
		iRes=iVal%10;
		
			iCount=iCount*iRes;

		iVal=iVal/10;
	}
	printf("Multiplication\n%d",iCount);
}
int main()
{
	int  iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);

	ClaculateMul(iNo);


	return 0;
}