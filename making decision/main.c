/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h> 
int main () 
{ 
/* local variable definition */
 int a = 100;
 int b=200;
 char grade ='B';
 /*if statment*/
 /* check the boolean condition using if statement */ 
 if( a < 20 ) 
 {
  /* if condition is true then print the following */ 
  printf("a is less than 20\n" );
   }
    printf("value of a is : %d\n", a); 
	
	//if else statment
	
	 /* check the boolean condition */ 
	 if( a < 20 ) 
	 { 
	 /* if condition is true then print the following */ 
	 printf("a is less than 20\n" );
	  }
	   else 
	   { 
	   /* if condition is false then print the following */ 
	   printf("a is not less than 20\n" );
	    } 
		printf("value of a is : %d\n", a);
		/* else if statment for various condition*/
		if( a == 10 ) 
		{ /* if condition is true then print the following */ 
		printf("Value of a is 10\n" ); 
		}
		else if( a == 30 ) 
		{ 
		/* if else if condition is true */ 
		printf("Value of a is 30\n" ); 
		}
		 else 
		{ 
		/* if none of the conditions is true */
		 printf("None of the values is matching\n" ); 
		 } 
		 printf("Exact value of a is: %d\n", a );
		 /*Nested if statments*/
		 if( a == 100 ) 
		 {
		  /* if condition is true then check the following */ 
		  if( b == 200 ) 
		  { 
		  /* if condition is true then print the following */ 
		  printf("Value of a is 100 and b is 200\n" ); 
		  } 
		  } 
		  printf("Exact value of a is : %d\n", a );
		   printf("Exact value of b is : %d\n", b );
		   /* Switch case */
		   switch(grade) 
		   {
		    case 'A' :
			printf("Excellent!\n" ); 
			break;
			/* if write case in this form will be "case'B' || case'C'*/
			 case 'B':
			  case 'C': 
			  printf("Well done\n" );
			   break; 
			   case 'D':
			    printf("You passed\n" );
				 break;
				  case 'F' :
				   printf("Better try again\n" );
				    break;
					 default : 
					 printf("Invalid grade\n" ); 
					 }
					  printf("Your grade is %c\n", grade );
					  /*Nested switch case*/
					  switch(a) 
					  { 
					  case 100:
					   printf("This is part of outer switch\n", a ); 
					   switch(b) 
					   {
					    case 200: 
						printf("This is part of inner switch\n", a );
						 }
						  }
						   printf("Exact value of a is : %d\n", a ); 
						   printf("Exact value of b is : %d\n", b );
	return 0; 
	}