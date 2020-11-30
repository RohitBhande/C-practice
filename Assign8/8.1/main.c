// Write a program which accept number from user and if number is less than 50 then print small 
//, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

/*

	start
		Accept the number form the user as iNo
		Check the number is smaller greater then 50
			if yes then print Smaller number
		check if number is between 50 to 100
			then print the number is medium
		if number is greater than 100
			print the number is greater
	END

*/



#include<Header.h>

/*
	function name:: ChkNumber
	discribtion: check the number greater or smaller then the mumber
	input:: integer
	output :Integer
	Author :: Rohit Bhande
	Date :: 06/08/2020


*/

int ChkNumber(int iNo)

{
	if(iNo<=50)
	{
		return 1;
	}
	else if(iNo >50&& iNo<=100)
	{
		return 2;

	}
	else if (iNo > 100)
	{
		return 3;
	}

}
int main()
{
int iVal=0;
int iRet=0;

printf("Enter the value\n");
scanf("%d",&iVal);

 iRet=ChkNumber(iVal);
 if (iRet==1)
 {
 	printf("Enter number is small\n");
 }
 if (iRet==2)
 {
 	printf("Number is medium\n");
 }
 if (iRet==3)
 {
 	printf("Number is greater\n");
 }



return 0;
} 