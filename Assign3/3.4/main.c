#include<Header.h>



/*
	start
		accept the one Character as cha

		check the condition if cha is between a to z
			if yes then subtract 32 from the number  a==97 (ASCII Representation)
			print the character
		if not check cha is between A to Z
			if yes then Add 32 in the charcter
			print the character
		
*/


/*
name:  ConvertChar
operation :: to convert lowercase charcter to upper case
input:: character
output:: none
author:: Rohit Bhande
Date:: 2/08/2020 

*/

void ConvertChar( char cVar)
{
	char i;

	
	if (cVar >='a'&& cVar <='z')
	{
		cVar=cVar-32;
		printf("%c\n",cVar );
	}
	else if (cVar>='A'&& cVar<='Z')
	{
		cVar=cVar+32;
		printf("%c\n",cVar );
	}
	

}

int main()
{
	char cChar;
	

	printf("Enter the one Character\n");
	scanf("%c",&cChar);
	//scanf("%d",&iVal);
	//printf("%c\n",cChar );

	
	ConvertChar(cChar);



	return 0;
}