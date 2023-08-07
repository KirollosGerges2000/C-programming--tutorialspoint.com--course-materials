/*
main.c
Author:kirollos Gerges
*/

#include <stdio.h>
 #include <string.h> 
 
 typedef struct Books 
 {
  char title[50]; 
  char author[50]; 
  char subject[100]; 
  int book_id; 
  } Book; 
  /* define Key word*/
  #define TRUE 1 
  #define FALSE 0
   //Prototypes
    void typedef_in_struct (void);
    void DEFINE (void); 
	typedef int us;  //using typedef in declaration values
  int main( )
   { 
   printf("*****************Typedef session***************\n");
  typedef_in_struct();
  printf("****************keyword <define> in C*****************\n");
      DEFINE ();
	  return 0; 
	  }
	  
	  //Typedef in struct function
	  void typedef_in_struct (void)
	  {
	  	  Book book;  // "Book" here be a data type defination
    strcpy( book.title, "C Programming"); 
   strcpy( book.author, "Nuha Ali");
    strcpy( book.subject, "C Programming Tutorial");
	book.book_id = 6495407; printf( "Book title : %s\n", book.title);
	 printf( "Book author : %s\n", book.author); 
	 printf( "Book subject : %s\n", book.subject); 
	 printf( "Book book_id : %d\n", book.book_id);
	  }
	  //define keyword function
	  void DEFINE (void)
	  {
	  us x =23;
	  	printf( "Value of TRUE : %d\n", TRUE);
		 printf( "Value of FALSE : %d\n", FALSE);
		 printf("Value of x : %d\n", x);
	  }