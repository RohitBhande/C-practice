// topic :: Write a program which accept total marks & obtained marks from user and calculate percentage. 

#include<Header.h>
float percent(int iNo1,int iNo2)
{

	float iResult=0;
	{
		iResult=(iNo2/iNo1)*100;
	}

	// iResult= (iNo2 %100 );
return iResult;


	//printf("percent%f\n",iResult);

}

int main()
{
	int iVal=0;
	int iVal1=0;
float fRet=0.0;


	printf("Enter total marks\n");
	scanf("%d",&iVal);


	printf("obtained marks\n");
	scanf("%d",&iVal1);


	fRet=percent ( iVal , iVal1 );


     printf("percentage%f\n",fRet );

	return 0;


}