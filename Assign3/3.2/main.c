#include<Header.h>


void EvenFact( int iNo)
{

	int iValue=0;
	if (iNo<=0)
	{
		iNo=-iNo;
	}

	if (iNo==1 || iNo==0)
	{
		printf("\n");
	}

	for (int iValue = 1; iValue < iNo; iValue++)
	{
		if (iNo%iValue == 0 && iValue%2==0 )
		{
			printf("%d\n",iValue );
		}
	}



}

int main()
{
	int iNo;

	printf("Enter the number\n");
	scanf("%d",&iNo);

	EvenFact(iNo);



	return 0;
}