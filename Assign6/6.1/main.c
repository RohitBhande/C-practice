//Write a program which accept number from user and display its digits in reverse order. 

/*
	start 
		accept one variaable as no

		perform the moderation opretion on the number and store the remainder  in variable
		 divide the number by 10 and store the result in itself variable
		 		display the variable
	END 	


		


*/

#include<Header.h>
void DisRevers(int iNo)
{

	int iRev=0;
	int iDigit=0;

	while(iNo !=0 )						//123
	{

		iDigit=iNo%10;

		iRev=(iRev*10)+iDigit;

		iNo=iNo/10;

	}
		printf("Reverse of your number\t%d\t",iRev);



}


int main()
{
	int iVal=0;

printf("Enetr any number\n");
scanf("%d",&iVal);
	
	DisRevers(iVal);

	return 0;
}