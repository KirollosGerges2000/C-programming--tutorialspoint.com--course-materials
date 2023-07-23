/*
main.c
Author:kirollos Gerges
*/
#include <stdio.h>
/* function declaration */ 
 void func(void);
  extern void write_extern(void);
 /*instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it*/
  static int count = 5; 
  /* global variable */ 
int mount; 
/*register is used in quick access such as counter that stored in special memory instead of Ram*/
//register int miles; 
int counter ;

int main() 
{
auto int month; //auto declare in functions only.
	register int miles;
	  while(count--) 
  {
   func();
    }
	write_extern();
	return 0;
}

/* function definition */ 
	  void func( void )
	   {
	    static int i = 5;
		 /* local static variable */
		  i++; 
		  printf("i is %d and count is %d\n", i, count); 
		  }