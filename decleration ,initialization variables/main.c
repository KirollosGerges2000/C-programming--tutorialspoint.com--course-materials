/*
main.c
Aythor:Kirollos Gerges

*/

#include <stdio.h> // Variable definition: 
extern int a, b; 
extern int c;
 extern float f;
 		// functions declaration 
		void func();
		int func_1();
  int main () 
  { 
  // Variable definition: 
  int a, b; 
int j=func_1();

  int c;
   float f;
    // actual initialization a =10;
	a=10;
	b =20;
	 c = a + b; //process
	
	  printf("value of c : %d \n", c);
	   f = 70.0/3.0; 
	   printf("value of f : %f \n", f);
	    func() ;
	   printf("value of j : %i \n", j);
	    return 0; 
		}
	
	
		  void func() 
		  {
		    int i ;
			printf("value of i [garabage value] : %i \n", i);  
		   }
		   
		   int func_1()
		   {
		   	return 54;
		   }
		   