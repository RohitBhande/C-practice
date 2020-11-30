#include<Header.h>


void DisNonFact(int iNo)

{

int iVal=0;

for (int iVal = 1; iVal < iNo; iVal++)
{
	if (iNo % iVal != 0)

	{
		printf("%d\t",iVal);
	}
}

}

//problem Statement:: Write a program which accept number from user and display all its non factors. 
/*
	start
		Accept the number from the user and store iNo
		Declare Variable for counter for iteration
			check the no is completetly not  divisible by  the iteration counter
				if yes then print the number




*/

int main()
{
	int iNo=0;

	printf("Enter The number\n");
	scanf("%d",&iNo);

	DisNonFact( iNo );

	return 0;
}