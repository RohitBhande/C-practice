// Write a program which accept number from user and print its numbers line.

/*
START 
	Accept the number as no
	Declare one variable For Counter in iteration
	convert number as negative by using updater, 
	start iteratin from that number 
	print number accepted till the given number
END
*/
#include<Header.h>
/*
Function Name: prntNumLine
Discribtion:: print the number line


input: Inteegr
Output::None
Author": Rohit Bhande
Date:: 06/08/2020


*/
void prntNumLine(int iVal)
{

int iVal1=0;
int iCount;

	
for(int iCount=(-iVal);iCount<=iVal;iCount++)
{
	printf("%d\t",iCount);
}


}
int main()
{
	int iNo=0;
	printf("Enter The number\n");
	scanf("%d",&iNo);

	prntNumLine(iNo);

	return 0;
}