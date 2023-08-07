/*
main.c
Author:kirollos Gerges
*/
#include <stdio.h> 
#include <string.h> 

/* define simple structure */ 
struct { 
unsigned int widthValidated; 
unsigned int heightValidated; 
} status1; 
/* define a structure with bit fields */

struct {
 unsigned int widthValidated : 3; 
 unsigned int heightValidated : 3; 
 } status2; 
 
 struct {
  unsigned int age : 3; 
  } Age;
 //Prototypes
   void comporing (void);
   void Bit_fields(void);
 int main( ) 
 { 
  printf("************Bit field session\n**************");
   printf("************Comporing between simple structure, structure with bit fields\n**************");
   comporing();
   printf("Bit field modification\n");
   Bit_fields();
   return 0; 
   }
   
   //comporing function
   void comporing (void)
   {
   	 printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
  printf( "Memory size occupied by status2 : %d\n", sizeof(status2));
   }
   
   //Bit fields function
   void Bit_fields(void)
   {
   //perimitive
   	Age.age = 4; 
	printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
	 printf( "Age.age : %d\n", Age.age );
	 //perimitive
	  Age.age = 7; 
	  printf( "Age.age : %d\n", Age.age );
	  //Non_perimitive for exceded no of bits
	   Age.age = 8; 
	   printf( "Age.age : %d\n", Age.age );
   }