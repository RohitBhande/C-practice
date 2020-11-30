
#include<Header.h>



/*
function Name:: RevsFact
Discription:: Printing Reverse of factor of user given number
input:: integer
output:: None
Author:: Rohit Bhade
Date: 2/08/2020

*/


void RevrsFact(int iVal)
{
int iRev=0;


if (iVal < 0)
{
	iVal = -iVal;
	/* code */
}

for (int iRev = iVal/2; iRev >= 1;iRev--)
{
	if(iVal %  iRev ==0)
	{
		printf("%d\t",iRev );
	}
}


}
//problem Statement::Write a program which accept number from user and display its factors in decreasing order. 
/*
	start
		accept the number as iVal
		take the one counter for iteration
			start the iteration with the last digit
			check the no is competetly divisible by counter
			if yes the print the number



*/

 int main()
{
	int iVal=0;
	printf("Enter the number\n");
	scanf("%d",&iVal);

	RevrsFact(iVal);

	return 0;
}