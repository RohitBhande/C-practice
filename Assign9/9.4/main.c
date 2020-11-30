//Write a program which accepts N from user and print all odd numbers up to N

/*
START 
	Accept the number as no
	Declare one variable For Counter in iteration
	in iterartion check if no%2 is not eqal to zero
	print the number till that number
END
*/
#include<Header.h>
/*
Function Name: prntOdd
Discribtion:: To print all odd number to the givven number



input: Inteegr
Output::None
Author": Rohit Bhande
Date:: 06/08/2020


*/
void prntOdd(int iVal)
{


int iCount=0;

if(iVal<0)
{
	iVal=-iVal;
}
	
for(int iCount=1;iCount<=iVal;iCount++)
{
	if(iCount%2 !=0)
	{
		printf("%d\t",iCount);
	}
	
}



}
int main()
{
	int iNo=0;
	printf("Enter The number\n");
	scanf("%d",&iNo);

	prntOdd(iNo);

	return 0;
}