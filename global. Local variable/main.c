/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h> 
//prototype
  int sum(int , int );
/* global variable declaration */
 int g; //using it  in global , local
 /* global variable declaration */ 
 int a = 20;
 
int main (void) 
{
 /* local variable declaration that has priority over Global */
 int a, b; 
 int c;
 int g=0; //using it  in global , local
  /* actual initialization */
   a = 10; 
   b = 20;
    //c = a + b;
	//g = a + b; 
	printf("In Local variable \n");
	 printf ("value of a = %d, b = %d and c = %d\n", a, b, c); 
	 printf("In Global variable \n");
	 printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
	 
	 printf ("value of a in main() = %d\n", a); 
	 c = sum( a, b);
	  printf ("value of c in main() = %d\n", c);
	 return 0;
	  }
	  
	  /* function to add two integers  for using formal parameters*/
	   int sum(int a, int b) 
	   { 
	   printf ("value of a in sum() = %d\n", a);
	    printf ("value of b in sum() = %d\n", b);
		 return a + b; }