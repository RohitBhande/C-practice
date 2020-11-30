#include<Header.h>

//problem statement:: Write a program which accept number from user and display its multiplication of factors. 
/*


	start 
		Accept the number from as iVal

		declear the one variable for counter
		in iterartion check the condition if ival is complete divisoible by itration counter
			if condition is true then to multiplication in condition.


	END 

*/

/*
Function Name:: DisplayMul
discription:: Perform multipication of factor
input:: Integer
output: None
Author: Rohit bhande
Date ::02/08/2020	 
*/



void DisplayMul(int iVal)
{
	int iCount=1;
	int iAns=1;
	for (int iCount = 1; iCount < iVal ; iCount++)
	{
		if (iVal % iCount == 0)
		{
			iAns =iAns*iCount;

		}
	}
	printf("%d\n",iAns);

}

int main()
{
	int iVal;


	printf("Enter the number\n");
	scanf("%d",&iVal);

	DisplayMul(iVal);


	return 0;
}