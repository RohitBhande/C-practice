#include<Header.h>

/*
	start
		Accept one character as and store in  var
		check the condition if character is match with var a,e,i,o,u
			if matches then display massage 
			else display the not 

*/



/*
name: ChkVowel
discription : Check the vowel of the character
input: character
output : boolean
Author: Rohit Bhande
Date:02/08/2020


*/


int ChkVowel(char ch)
{
	char cChar='\n';
	//Boolean bRet=FALSE;


	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main()
{

	char cVar='\n';
	BOOLEAN bRet=FALSE;

	printf("Enter any Character to check Vowel or not\n");
	scanf("%c",&cVar);

	bRet= ChkVowel(cVar);

	if (bRet== TRUE)
	{
		printf("Character is Vowel\n");
	}
	else
	{
		printf("Character is not Vowel\n");
	}



	return 0;

}