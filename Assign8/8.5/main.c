// Write a program which accept number from user and display its table in reverse order.


#include<Header.h>

/*
Function Name: table
Discribtion:: print the table in decending order of the accepted number
input: Inteegr
Output::Integer
Author": Rohit Bhande
Date:: 06/08/2020

*/
void table(int iVal)
{
	int iCount=0;
	if (iVal<0)
	{
		iVal=-iVal;
	}
	for (int iCount=10;iCount >=1;iCount--)
	{

		printf("%d\n",(iCount*iVal));
	}
}
/*
	start
		Accept the number from user as no
		declare the one variable for counting the for
		multiply the nuber stared from 10 as compare to counter till 1 
		print the result in decresing order
	END

*/
int main()
{
	int iNo=0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	table(iNo);
	



	return 0;

}
