/*
main.c 
Author:Kirollos Gerges

*/
#include <stdio.h> 
//prototypes
void intro_pointers(void);
void normal_pointers (void);
void NULL_IN_POINTERS(void);
void increament_pointer(void);
  void decrement_pointer(void);
  void Pointers_comp(void);
// Global Values
 const int MAX = 3;
int main ()
 {
 
 printf("pointers session \n ");
 printf("Introduction to Pointers \n");
intro_pointers(); //Each address is compiler independent
printf("Normal Pointers \n");
normal_pointers(); //Each pointer depent on argument to call it 
printf("NULL in Pointers \n");
NULL_IN_POINTERS(); // "NULL" is address of pointer that = 0
//printf("Increament Pointer\n");
//increament_pointer();  // use ptr++
printf("decrement Pointer\n");
decrement_pointer();  // use ptr--
printf("camporsion Pointer\n");
Pointers_comp();  // use while to campore between arrays elements and its location to terminates loop
  return 0; 
  }
  
  // Intro function 
  void intro_pointers(void)
  {
  	// init local variable
 int var1; 
 char var2[10]; 
 //to print addresss use "%x"
 printf("Address of var1 variable: %x\n", &var1 );
  printf("Address of var2 variable: %x\n", &var2 ); 
  }
  
  //normal pointer
  void normal_pointers (void)
  {
  	int var = 20; 
	/* actual variable declaration */ 
	int *ip; /* pointer variable declaration */ 
	 ip = &var; /* store address of var in pointer variable*/ 
	 printf("Address of var variable: %x\n", &var ); /* address stored in pointer variable */ 
	 printf("Address stored in ip variable: %x\n", ip ); /* access the value using the pointer */
	  printf("Value of *ip variable: %d\n", *ip );
  }
  
  //NULL in pointers function
  void NULL_IN_POINTERS(void)
  {
  	int *ptr = NULL; 
	printf("The value of ptr is : %x\n",ptr); // This '&' argument call it by address
  }
  
  //Increament Pointer
  void increament_pointer(void)
  {
  	int var[] = {10, 100, 200}; 
	int i, *ptr; 
	/* let us have array address in pointer */ 
	ptr = var;
	for ( i = 0; i < MAX; i++) 
	{ 
	printf("Address of var[%d] = %x\n", i, ptr ); 
	printf("Value of var[%d] = %d\n", i, *ptr ); 
	/* move to the next location */
	ptr++;
  }
  }
  
  
    //decrement Pointer
  void decrement_pointer(void)
  {
  	int var[] = {10, 100, 200}; 
	int i, *ptr; 
	/* let us have array address in pointer */ 
	 ptr = &var[MAX-1];
	for ( i = MAX; i < 0; i--) 
	{ 
	printf("Address of var[%d] = %x\n", i, ptr ); 
	printf("Value of var[%d] = %d\n", i, *ptr ); 
	/* move to the next location */
	ptr--;
  }
  }
  
  
  // pointers canporsion function
  void Pointers_comp(void)
  {
  	
	
	int var[] = {10, 100, 200};
	 int i, *ptr; /* let us have address of the first element in pointer */ 
	 ptr = var; 
	 i = 0; 
	 while ( ptr <= &var[MAX - 1] ) 
	 { 
	 printf("Address of var[%d] = %x\n", i, ptr );
	  printf("Value of var[%d] = %d\n", i, *ptr ); /* point to the previous location */ ptr++;
  }
  }