#include<stdio.h> 


void Display()  
{  
int i = 0;
  for(i = 1; i<=5 ;i++)
   {    
    printf("Marvallous");
   } 
 }

int main()
 { 
  void Display(); 
  
 // printf("Inside Main Function\n");
  
  int i = 0;
  for(i = 1; i<=5 ;i++)
   {    
    printf("Marvallous\n");
   } 
 return 0;
 }