//.Write a program which accept number from user and print numbers till that  number. 


/*
START 
	Accept the number as no
	Declare one variable For Counter in iteration
	print number accepted till the given number
END
*/

#include<Header.h>

/*
Function Name: prntTillNum
Discribtion:: print the number till the number

input: Inteegr
Output::None
Author": Rohit Bhande
Date:: 06/08/2020


*/

void prntTillNum(int iVal)
{

	if (iVal <0)
	{
		iVal=-iVal;
	}

int iCount=0;
for(int iCount=1;iCount<=iVal;iCount++)
{
	printf("%d\t",iCount);
}
}
int main()

{
	int iNo=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	prntTillNum(iNo);
	
return 0;

}