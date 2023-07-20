/*
main.c
Author:Kirollos Gerges
*/



#include <stdio.h>
 #include <limits.h>
 #include <float.h>
  
 /* Ex1 
 int main() 
 { 
 printf("Storage size for int : %d \n", sizeof(int));
  return 0;
  }
  */
  
   /* Ex2 */
  int main() 
  {
  	printf("Storage size for float : %d \n", sizeof(float));
	 printf("Minimum float positive value: %E\n", FLT_MIN );
	  printf("Maximum float positive value: %E\n", FLT_MAX ); 
	  printf("Precision value: %d\n", FLT_DIG ); 
	  return 0;
	
  }