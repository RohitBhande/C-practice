#include<Header.h>


void DisSumNonFact(int iNo)
{
int iCount=0;
int iAns=1;
if (iNo < 0)
{
	iNo=-iNo;
}
for (int iCount=1;iCount < iNo;iCount++)
{
	if (iNo%iCount != 0)
	{
		printf("%d\n",iCount );
		iAns= iAns + iCount;
	}
}printf("summation of number%d\n",iAns );



}

//problem statement:: Write a program which accept number from user and return summation of all its non factors. 

/*
	start 
		Accept the number from user and store in var
		Declare te one Variable for iterartion 
		 check var is not completly divisible by iteration counter
		 if condition is true then add the all non factor number
		 display the addition 
	END 


*/

int main()
{
	int iVar=0;

	printf("enter number\n");
	scanf("%d",&iVar);

	DisSumNonFact(iVar);

return 0;
}