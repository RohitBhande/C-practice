//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
 #include<Header.h>

void DiffrenceSummation(int iVal)
{
	int iCount=0;
	int iCount1=0;
	int iRes=0;
	int iAns=0;

	while(iVal != 0)
	{
		iRes=iVal%10;
		if (iVal%2==0)
		{
			iCount=iCount+iRes;
		}
		else{
			iCount1=iCount1+iRes;

		}

		iVal=iVal/10;
	}

	printf("Add%d\n",iCount);
	printf("Diff%d\n",iCount1);

	iAns=iCount-iCount1;

	printf("Diffrence is\n%d",iAns);
}
int main()
{
	int  iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);

	DiffrenceSummation(iNo);


	return 0;
}