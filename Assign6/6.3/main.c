// statement :: Write a program which accept number from user and count frequency of 2 in it.

#include<Header.h>

/*
  	START
  		Accept the number from user as no
  		Declare one counter and initialized to zero
  			chk while the give number is not equal to zero
  			  	Perform the moderation operation on and store the indivitual number in one variable
  			  	and check the result number is 2 ,
  			  	if yes the increament the counter
  			  	ind display the result
  			  	
*/
int CountTwo(int iNo)

{
	int iCount=0;
	int iNo1=0;

	if(iNo < 0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iNo1=iNo%10;
		if (iNo1==2)
		{
			iCount++;
		}
		iNo=iNo/10;


	}
		return iCount;
}


int main()
{
	int iVal1=0;
	//int iVal2=0;
	int iRet= 0;

	printf("Enter the first number");
	scanf("%d",&iVal1);

	iRet=CountTwo(iVal1);

	printf("'%d'\n",iRet );

	return 0;

}