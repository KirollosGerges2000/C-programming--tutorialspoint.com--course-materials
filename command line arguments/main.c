/*
main.c
Author:Kirollos Gerges
*/

#include <stdio.h> 

int main( int argc, char *argv[] ) 
{ 
if( argc == 3 )
 { 
 printf("The argument supplied is %s\n", argv[2]);
  } 
  else if( argc > 3 ) 
  {
   printf("Too many arguments supplied.\n"); 
   } 
   else
    {
	 printf("One argument expected.\n");
	 return 0;
	  } 
	  }