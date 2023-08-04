/*
main.c
Author:kirollos Gerges
*/
#include <stdio.h> 
#include <string.h>
 union Data 
  //you can minimize the size of struct by using "pragma"
  {
   int i;
    float f; 
	char str[20]; 
	}; 
	//prototypes
	   void UNION (void);
	     void accessing_data(void);
	
	int main()
	 {
	 printf("Union session\n");
	 printf("The size of union detecting\n");
   UNION();
    printf("data accessing in Union\n");
	 accessing_data();
	  return 0;
	   }
	   
	   //define UNION function
	   void UNION (void)
	   {
	   	 union Data data; 
	 printf( "Memory size occupied by data : %d\n", sizeof(data));
	   }
	   
	   void accessing_data(void)
	   {
	   	union Data data; 
		data.i = 10;
		 printf( "data.i : %d\n", data.i);
		data.f = 220.5; 
		 printf( "data.f : %f\n", data.f);
		strcpy( data.str, "C Programming"); 
		printf( "data.str : %s\n", data.str);
	   }