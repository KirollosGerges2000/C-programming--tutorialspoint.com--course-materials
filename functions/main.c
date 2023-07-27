/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h>
//prototypes
int max(int , int ) ;
 //void swap(int , int );
 void swap(int *x, int *y);
int main (void)
{
//local variables
int res;
int a = 100;
 int b = 200;
res= max(5, 6) ;
//maximum number editor
printf("The maximum number editor\n");
printf("The maximum: %d\n",res);
/*
//call by value process
printf("swaping process by call by value\n");
printf("Before swap, value of a : %d\n", a ); 
printf("Before swap, value of b : %d\n", b ); 
/* calling a function to swap the values  
swap(a, b);
 printf("After swap, value of a : %d\n", a );
  printf("After swap, value of b : %d\n", b );	*/
  
  
  //call by reference process
printf("swaping process by call by refrence\n");
printf("Before swap, value of a : %d\n", a ); 
printf("Before swap, value of b : %d\n", b ); 
/* calling a function to swap the values */ 
swap(&a,&b);
 printf("After swap, value of a : %d\n", a );
  printf("After swap, value of b : %d\n", b );
	
	
	
	return 0;
}

/* function returning the max between two numbers */ 
int max(int num1, int num2) 
{ 
/* local variable declaration */ 
int result;
 if (num1 > num2) 
 result = num1; 
 else 
 result = num2;
 return result;
 }
 
 /*
 /* function definition to swap the values by "call by value 
 void swap(int x, int y)
  { int temp; 
  temp = x; 
  /* save the value of x 
   x = y; 
   /* put y into x 
   y = temp;
    /* put x into y 
	}*/
	
	
	 /* function definition to swap the values "call by refrence */ 
 void swap(int *x, int *y)
  { 
  int temp; 
  temp = *x; 
  /* save the value of x */
   *x = *y; 
   /* put y into x */ 
   *y = temp;
    /* put x into y */
	}