#include<Header.h>
//Write a program which accept number from user and return difference between summation of all its factors and non factors. 


/*
name: ChkVowel
discription : Check the vowel of the character
input: character
output : boolean
Author: Rohit Bhande
Date:02/08/2020


*/
#include "Header.h"

void DisSumNonFact(int iNo)
{
int iCount=0;
int iAns1=1;
int iAns2=1;
int iResult=0;

if (iNo < 0)
{
	iNo=-iNo;
}
for (int iCount=1;iCount < iNo;iCount++)
{
	if (iNo%iCount == 0)
	{
		
		iAns1= iAns1 + iCount;
	}
}
printf("summation of factor number%d\n",iAns1 );

for (int iCount=1;iCount < iNo;iCount++)
{
	if (iNo%iCount != 0)
	{
		iAns2= iAns2 + iCount;
	}
}
printf("summation of non-factor number%d\n",iAns2 );

iResult=  (iAns2) - (iAns1);
printf("Diffrence Between %d\n",iResult );




}

int main()
{
	int iVar=0;

	printf("enter number\n");
	scanf("%d",&iVar);

	DisSumNonFact(iVar);

return 0;
}