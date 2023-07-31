/*
main.c
Author:Kirollos Gerges
*/
#include <stdio.h>
//prototypes
  void single_array(void);
void Multi_array(void);
 double getAverage(int arr[], int size);
  void main_of_getAverage (void);
  	 int * getRandom( );
	  int function_of_pointer() ;
	void  Pointer_to_array(void);
 int main () 
 {
 printf("ARRAYS \n");
  printf("single_array \n");
  single_array(); //execute the single_array_function
  printf("Multi_array \n");
  Multi_array(); //execute the Multi_array_function
  printf("Average using array\n");
 main_of_getAverage ();
  printf("pointer of array\n");
  function_of_pointer ();
   printf("pointer to array\n");
  Pointer_to_array();
   printf("see you in next tutorial [C Pointers very important] ");
	   return 0; 
	  }
	  
	  //Multi_array function
	  void Multi_array(void)
	  {
	  	int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}}; 
		int i, j;
		 /* output each array element's value */ 
		 for ( i = 0; i < 5; i++ ) 
		 { 
		 for ( j = 0; j < 2; j++ )
		  { 
		  printf("a[%d][%d] = %d\n", i,j, a[i][j] ); 
		  } 
		  }
	  } 
	  
	  //single_array function
	  void single_array(void)
	  {
	  	  int n[10]; 
  /* n is an array of 10 integers */
   int i,j;
    /* initialize elements of array n to 0 */ 
	for ( i = 0; i < 10; i++ )
	{ 
	n[ i ] = i + 100;
	 /* set element at location i to i + 100 */ 
	 } /* output each array element's value */
	  for (j = 0; j < 10; j++ ) 
	  { 
	  printf("Element[%d] = %d\n", j, n[j] ); 
	  }
	  }
	  
	    //Average function using arrays
	  double getAverage(int arr[], int size)
	   {
	    int i; 
		double avg;
		 double sum; 
		for (i = 0; i < size; ++i) 
		{ 
		sum += arr[i]; 
		} 
		avg = sum / size; 
		return avg;
		 }
		 
		
	    //main of Average function using arrays 
	 void main_of_getAverage (void)
	 {
	 	/* an int array with 5 elements */
		 int balance[5] = {1000, 2, 3, 17, 50}; 
		 double avg; 
		 /* pass pointer to the array as an argument */ 
		 avg = getAverage( balance, 5 ) ;
		  /* output the returned value */
		   printf( "Average value is: %f ", avg );
		
	 }
	 
	 
	 /* function to generate and return random numbers */ 
	 int * getRandom( ) 
	 {
	  static int r[10];
	  int i;
	  /* set the seed */
	   srand( (unsigned)time( NULL ) ); 
	   for ( i = 0; i < 10; ++i) 
	   { 
	   r[i] = rand(); 
	   printf( "r[%d] = %d\n", i, r[i]); 
	   }
	    return r;
		}
		
		
		
		
		/* main function to call above defined function */
		 int function_of_pointer () 
		 {
		  /* a pointer to an int */ 
		  int *p;
		  int i;
		   p = getRandom(); 
		  for ( i = 0; i < 10; i++ )
		   {
		    printf( "*(p + %d) : %d\n", i, *(p + i)); 
			} 
			return 0; 
			}
			
			
			void Pointer_to_array(void)
			{
				/* an array with 5 elements */ 
				double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
				 double *p;
				  int i; 
				  p = balance;
				   /* output each array element's value */
				    printf( "Array values using pointer\n"); 
					for ( i = 0; i < 5; i++ )
					 { 
					 printf("*(p + %d) : %f\n", i, *(p + i) );
					  } printf( "Array values using balance as address\n");
					   for ( i = 0; i < 5; i++ )
					    { printf("*(balance + %d) : %f\n", i, *(balance + i) ); 
						}
			}