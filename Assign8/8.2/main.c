//Problem Statement:: Accept single digit number from user and print it into word.

/*
	START
		accept the number as iNo
		start the selection for the number using switch case
		if number is 1 then print one and so on.

	END

*/

#include<Header.h>


void ConvertName(int iVal)
{
	
	if (iVal==1)
	{
		printf("One");
	}
	if (iVal==2)
	{
		printf("two");	
	}
	if (iVal==3)
	{
		printf("Three");
	}
	if (iVal==4)
	{
		printf("Four");	
	}
	if (iVal==5)
	{
		printf("Five");
	}
	if (iVal==6)
	{
		printf("six");

	}

	if (iVal==7)
	{
		printf("Seven");
	}
	if (iVal==8)
	{
		printf("Eight");	
	}
	if (iVal==9)
	{
		printf("Nine");
	}
	if (iVal==0)
	{
		printf("Zero");	
	}
	else{
		printf("Invalid Number\n");
	}

}

int main()
{
	int iNo=0;

	printf("enter the single digit number\n" );
	scanf("%d",iNo);

	ConvertName(iNo);

	return 0;
}

