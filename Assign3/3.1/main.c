
#include<stdio.h>

void Display(int iNo)
{
	int iValue=0;

	int iCount=0;

	for (int iValue = 1; iValue <= iNo*2; iValue++)
	{

		if (iValue%2==0)
		{
			printf("%d\t",iValue );
		}	
	}
}

int main()
{

	int iNo=0;
	printf("Enter The number\n");
	scanf("%d",&iNo);

	Display(iNo);


	return 0;
}