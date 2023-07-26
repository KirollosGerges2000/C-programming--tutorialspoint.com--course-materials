/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h>
//prototypes
void while_loop (void);
void for_loop (void);
void do_while_loop (void);
void nested_loop(void);
 void break_keyword (void);
 void continue_keyword (void);
  void go_to_keyword (void);
  /* global variable definition */ 
  static int a = 10; 
 int main (void)
  {
 for( ; ; )  //infinite loop
 {  
 //from while_loop function to nested_loop function will be executr one after that will execute infinitly
 	/* while loop execution */
  while_loop ();
/*for loop in C*/
for_loop();

	 /*  do...while loop execution */
	do_while_loop();
	/*nested loop execuation*/
	nested_loop();
	/*break keyword execuation*/
	   while(1) //super loop
   {
   	break_keyword ();
	/*continue keyword execuation*/
	continue_keyword();
	/*go to keyword execuation*/
	go_to_keyword ();
 }

   }

	return 0; 
	}
	
	
	/* while loop function*/
	void while_loop (void)
	{
		   printf("The while loop practice\n");
    while( a < 20 ) 
	{ 
	printf("value of a: %d\n", a); 
	a++; 
	} 
	}
	
	/* for loop function*/
	void for_loop (void)
	{
			printf("The for loop practice\n");
	for( int a = 10; a < 20; a++)
	 { 
	 printf("value of a: %d\n", a);
	  }
		
		
	}
	
	
	/* do while loop function*/
	void do_while_loop (void)
	{
	int a=10;
		 printf("The do...while loop practice\n"); 
	  do
	   {
	    printf("value of a: %d\n", a);
		 a++; 
		 }
		 while( a < 20 );
		 }
		 /* do nested loop function*/
		 void nested_loop(void)
		 {
		  printf("The nested loop practice\n"); 
		 	/* local variable definition */
			 int i=0;
			 int j=0;
			  for(i=2; i<100; i++) 
			  {
			   for(j=2; j <= (i/j); j++)
			    if(!(i%j)) 
				break; // if factor found, not prime 
				if(j > (i/j))
				 printf("%d is prime\n", i);
				  }
		 }
		 /* break keyword function*/
		 void break_keyword (void)
		 {
		 int a=10;
		printf("The break keyword  practice\n"); 
		 	/* while loop execution */ 
			while( a < 20 ) 
			{
			 printf("value of a: %d\n", a);
			  a++;
			   if( a > 15)
			    {
				 /* terminate the loop using break statement */ 
				break;
				}
		 }
		 }
		 /* continue function*/
		 void continue_keyword (void)
		 {
		 int a=10;
		 printf("The continue keyword  practice\n"); 
		 	/* do loop execution */
			 do { 
			 if( a == 15)
			  { 
			  /* skip the iteration */ 
			  a = a + 1; 
			  continue;
			   } 
			   printf("value of a: %d\n", a); 
			   a++;
			    }
				while( a < 20 );
		 }
		 
		 /* go to keyword function*/
		 void go_to_keyword (void)
		 {
		 
			 /* local variable definition */ 
			 int a = 10;
			 	 printf("The go to keyword  practice\n"); 
			  /* do loop execution */
			   LOOP:do 
			   {
			    if( a == 15)
			    {
				 /* skip the iteration */ 
				 a = a + 1;
				  goto LOOP;
				   }
				    printf("value of a: %d\n", a);
					 a++; 
					 }
					 while( a < 20 );
		 }