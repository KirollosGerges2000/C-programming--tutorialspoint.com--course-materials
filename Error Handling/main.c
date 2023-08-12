/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h> 
#include <errno.h>
 #include <string.h>
 #include <stdlib.h>
 extern int errno ; //Declaration in outside files
   //Prototypes
 void ERRNO_FUNCTION(void);
 		void DIVISION_BY_ZERO (void);
   int main () 
   {
   printf("******************* Error Handling Tutorial**********************\n");
     // printf("******************* ERRNO Example**********************\n");
  //ERRNO_FUNCTION();
     printf("*******************Dividing by zero example**********************\n");
   DIVISION_BY_ZERO();
		return 0; 
		} 
		
		
		//ERRNO function
		void ERRNO_FUNCTION(void)
		{
			FILE * pf; 
	int errnum;
	
	pf = fopen ("unexist.txt", "rb"); 
	if (pf == NULL)
	 { 
	 errnum = errno; 
	 fprintf(stderr, "Value of errno: %d\n", errno);
	  perror("Error printed by perror");
	   fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
	    } 
		else 
		{ 
		fclose (pf); 
		} 
		}
		
		
				//division by zero function
		void DIVISION_BY_ZERO (void)
		{
			int dividend = 20;
			 int divisor = 5; 
			 int quotient;
			  if( divisor == 0)
			  { 
			  fprintf(stderr, "Division by zero! Exiting...\n");
			   exit(-1);
			    } 
				quotient = dividend / divisor; 
				fprintf(stderr, "Value of quotient : %d\n", quotient );
				 exit(0);
		}