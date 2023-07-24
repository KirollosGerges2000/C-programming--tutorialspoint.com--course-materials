/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h> 
//prototypes
void Arthimitic_operators(void);
void Relational_Operators(void);
void Logical_Operators(void); 
void Bit_wise_operators(void);
void Assignment_operators (void);
 void Operators_Precedence (void);

void main(void)
 {
 printf("Arthimitic_operators \n");
Arthimitic_operators();
printf("\n");
 printf("Relational_operators \n");
 Relational_Operators();
 printf("\n");
 printf("Logical_operators \n");
 Logical_Operators();
  printf("\n");
 printf("Bitwise_operators \n");
Bit_wise_operators();
  printf("\n");
 printf("Assignment_operators \n");
Assignment_operators();
  printf("\n");
 printf("operatora_precedence \n");
Operators_Precedence();
 
		    }
			/* Arthemitic operators Function*/
			void Arthimitic_operators(void)
			{
				  int a = 21;
    int b = 10; 
	int c ;
	 c = a + b;
	  printf("Line 1 - Value of c is %d\n", c );
	   c = a - b; 
	   printf("Line 2 - Value of c is %d\n", c );
	    c = a * b; 
		printf("Line 3 - Value of c is %d\n", c ); 
		c = a / b;
		 printf("Line 4 - Value of c is %d\n", c );
		 c = a % b; 
		 printf("Line 5 - Value of c is %d\n", c );
		  c = a++; 
		  printf("Line 6 - Value of c is %d\n", c );
		   c = a--; 
		   printf("Line 7 - Value of c is %d\n", c );
			}
			
			/*RelationalOperators*/
			void Relational_Operators(void)
			{
				int a = 21;
				 int b = 10; 
				 int c ;
				  if( a == b ) 
				  {
				   printf("Line 1 - a is equal to b\n" ); 
				   } 
				   else
				    {
					 printf("Line 1 - a is not equal to b\n" ); 
					 } 
					 if ( a < b )
					  { 
					  printf("Line 2 - a is less than b\n" );
					   } 
					   else 
					   { 
					   printf("Line 2 - a is not less than b\n" ); 
					   } 
					   if ( a > b ) 
					   { 
					   printf("Line 3 - a is greater than b\n" );
					    } 
						else 
						{ 
						printf("Line 3 - a is not greater than b\n" );
						 } 
						 /* Lets change value of a and b */ 
						 a = 5;
						  b = 20;
						   if ( a <= b )
						   { 
						   printf("Line 4 - a is either less than or equal to b\n" );
						    } 
							if ( b >= a )
							 { 
							 printf("Line 5 - b is either greater than or equal to b\n" );
							  } 
							  
			}
			
			/* Logiacal operators function*/
			void Logical_Operators(void)
			{
			  int a = 5; 
			  int b = 20; 
			  int c ; 
			  if ( a && b )
			   {
			    printf("Line 1 - Condition is true\n" ); 
				} 
				if ( a || b )
				 { 	
				printf("Line 2 - Condition is true\n" );
				 } 
				 /* lets change the value of a and b */ 
				 a = 0;
				  b = 10;
				   if ( a && b ) // This condition  not satisfy
				   { 
				   printf("Line 3 - Condition is true\n" ); 
				    } 
					else
					 { 
					 printf("Line 3 - Condition is not true\n" ); 
					}
					 if ( !(a && b) )  // This condition satisfy
					  {
					   printf("Line 4 - Condition is true\n" ); 
					    }
						 }
						 
						 /* Bitwise operators function*/
						 void Bit_wise_operators(void)
						 {
						 	unsigned int a = 60; /* 60 = 0011 1100 */ 
							unsigned int b = 13; /* 13 = 0000 1101 */ 
							int c = 0;
							 c = a & b; /* 12 = 0000 1100 */
							 printf("Line 1 - Value of c is %d\n", c );
							  c = a | b; /* 61 = 0011 1101 */ 
							  printf("Line 2 - Value of c is %d\n", c );
							   c = a ^ b; /* 49 = 0011 0001 */
							    printf("Line 3 - Value of c is %d\n", c );
								 c = ~a; /*-61 = 1100 0011 */
								  printf("Line 4 - Value of c is %d\n", c );
								   c = a << 2; /* 240 = 1111 0000 */ 
								   printf("Line 5 - Value of c is %d\n", c );
								    c = a >> 2; /* 15 = 0000 1111 */
									printf("Line 6 - Value of c is %d\n", c );
							
						 }
						 
						 /* Assignments operators function*/
						 
						 void Assignment_operators (void)
						 {
						 	 int a = 21;
						  int c ; c = a; 
						  printf("Line 1 - = Operator Example, Value of c = %d\n", c );
						   c += a; 
						   printf("Line 2 - += Operator Example, Value of c = %d\n", c ); 
						   c -= a; 
						   printf("Line 3 - -= Operator Example, Value of c = %d\n", c ); 
						   c *= a;
						    printf("Line 4 - *= Operator Example, Value of c = %d\n", c );
							 c /= a;
							  printf("Line 5 - /= Operator Example, Value of c = %d\n", c );
							   c = 200;
							    c %= a;
								 printf("Line 6 - %= Operator Example, Value of c = %d\n", c );
								  c <<= 2;
								   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );
								    c >>= 2;
									 printf("Line 8 - >>= Operator Example, Value of c = %d\n", c ); 
									 c &= 2; 
									 printf("Line 9 - &= Operator Example, Value of c = %d\n", c );
									  c ^= 2;
									   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c ); 
									  c |= 2; 
									  printf("Line 11 - |= Operator Example, Value of c = %d\n", c );
						 }
						 
						  /* Operators_Precedence function*/
						 void Operators_Precedence (void)
						 {
						 	
							
							int a = 20;
							 int b = 10;
							  int c = 15;
							   int d = 5;
							    int e; 
								e = (a + b) * c / d; // ( 30 * 15 ) / 5 
								printf("Value of (a + b) * c / d is : %d\n", e );
								 e = ((a + b) * c) / d; // (30 * 15 )  / 5
								 printf("Value of ((a + b) * c) / d is : %d\n" , e );
								  e = (a + b) * (c / d); // (30) * (15/5) 
								  printf("Value of (a + b) * (c / d) is : %d\n", e ); 
								  e = a + (b * c) / d; // 20 + (150/5) 
								  printf("Value of a + (b * c) / d is : %d\n" , e );
						 }
				
						