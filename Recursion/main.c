/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h>
//Prototypes
int factorial(unsigned int i);
void Execute_factorial(void);
  int fibonaci(int i);
  void Execute_fibonaci(void);
    int main()
	{
		printf("***************Recursion session******************\n");
		//printf("***************Factorial Example******************\n");
		//Execute_factorial();
			printf("***************Fibonaci Example******************\n");
		Execute_fibonaci();
		return 0;
	}
	
	
	//Factorial process function 
	int factorial(unsigned int i)
  { 
  if(i <= 1) 
  {
   return 1; 
  } 
  return i * factorial(i - 1);
   }
   
   //Factorial execuation function 
   void Execute_factorial(void)
   {
   	int i = 15;
		 printf("Factorial of %d is %d\n", i, factorial(i));
   }
   
   //Fibonaci process function 
   int fibonaci(int i)
    {
	 if(i == 0) 
	 {
	  return 0; 
	  }
	   if(i == 1)
	    { 
		return 1; 
		} 
		return fibonaci(i-1) + fibonaci(i-2); 
		}
		 //Fibonaci Execute function 
		void Execute_fibonaci(void)
		{
			
			int i; for (i = 0; i < 10; i++) 
			{ 
			printf("%d\t%n", fibonaci(i)); 
			}
		}