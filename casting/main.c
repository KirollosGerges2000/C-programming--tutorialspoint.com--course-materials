/*
main.c
Author:Kirollos Gerges 
*/


#include <stdio.h>
//Prototypes
   void DEF_CASTING(void);
   void ASCII_value(void);
 int main() 
 {
 printf("**************CASTING Tutorial**************\n");
printf("*********Simple casting****************\n");

DEF_CASTING();
printf("*********Detecting ASCII value****************\n");
ASCII_value();
   }
   
  // Simple casting function
   void DEF_CASTING(void)
   {
   	int sum = 17, count = 5; 
  double mean;
   mean =  (double) sum / count; //The casting process
   printf("Value of mean : %f\n", mean ); 
 
   }
   
   
 //  Detecting ASCII value function
   void ASCII_value(void)
   {
   	float i = 17.43;
	 char c = 'c'; /* ascii value is 99 */ 
	 float sum;
	  sum = i + c; //process
	 printf("Value of sum : %f\n", sum );
   }