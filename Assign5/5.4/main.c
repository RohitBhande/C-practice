//Write a program which accept three numbers and print its multiplication.  
 

#include<Header.h>

 void DisplyMul(int iNo1,int iNo2,int iNo3)
{
	int iResult=0;

	if (iNo1==0 || iNo2 ==0  || iNo3 == 0)
	{
		iNo1 = iNo2 = iNo3 == 0;
	}

	if (iNo1 == 0 )
	{
		iNo1 = 1;
	}
	 if(iNo2 == 0 )
	{
		iNo2 = 1;

	}
	 if(iNo3 == 0)
	{
		iNo3 = 1;
	}

	iResult=iNo1*iNo2*iNo3;
	printf("Multiplication of number\n%d",iResult);


}

int main()
{
	int iVal1=0,iVal2=0,iVal3=0;




	printf("Enter the three Number\n");
	scanf("%d%d%d",&iVal1,&iVal2,&iVal3);


	DisplyMul(iVal1,iVal2,iVal3);
	return 0;

}