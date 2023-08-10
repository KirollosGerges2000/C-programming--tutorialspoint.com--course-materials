/* 
main.h
Author:kirollos Gerges 
*/

#include "stdio.h"
#include "myheader.h"
//prototypes
 void PRE_DEFINED_MACROS(void);
 void DEFINED_OPERATOR(void);
 void MAX_NUM_FOR_PRE_PROCESSING(void);
int main(void)
{
printf("pre defined Macros \n");
PRE_DEFINED_MACROS();
printf("defined operator \n");
 DEFINED_OPERATOR();
printf("max number using pre processing\n");	
MAX_NUM_FOR_PRE_PROCESSING();
	return 0;
	 } 
	 
	 //pre defined macros function
	 void PRE_DEFINED_MACROS(void)
	 {
	 		 printf("File :%s\n", __FILE__ ); 
 printf("Date :%s\n", __DATE__ );
  printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
	 }

//defined operator
void DEFINED_OPERATOR(void)
{
	printf("Here is the message: %s\n", MESSAGE);
}

// max number using pre processing function
void MAX_NUM_FOR_PRE_PROCESSING (void)

   { 
   printf("Max between 20 and 10 is %d\n", MAX(10, 20));
 
    }