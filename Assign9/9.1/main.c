//.Write a program which accept number from user and print that number of $ & * on screen. 


/*
START 
	Accept the number as no
	Declare one variable For Counter in iteration
	the number accepted time print the given pattern
END
*/
#include<Header.h>


/*
Function Name: DrawPattern
Discribtion:: To draw pattern of $ and *
input: Inteegr
Output::None
Author": Rohit Bhande
Date:: 06/08/2020


*/

void DrawPattern(int iVar)
{

	int iCount=0;
	for(int iCount=1; iCount<=iVar ; iCount++)
	{
		printf("$\t*\t");
	}
}

int main()
{
	int iNo=0;

	printf("Enter The number\n");
	scanf("%d",&iNo);

	DrawPattern(iNo);


	return 0;

}