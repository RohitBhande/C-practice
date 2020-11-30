//Write a program which accept number from user and count frequency of such a digits which are less than 6. 

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

int CountLessSix(int iNo)

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
		if (iNo1 < 6)
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

	iRet=CountLessSix(iVal1);

	printf("'%d'\n",iRet );

	return 0;

}