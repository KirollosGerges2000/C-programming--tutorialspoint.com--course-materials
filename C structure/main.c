/*
main.c
Author:kirollos Gerges
*/
#include <stdio.h> 
#include <string.h> 

struct Books
 { 
 char title[50];
  char author[50]; 
  char subject[100]; 
  int book_id; 
  }; 
  //prototypes
void STRUCTURE_DECLERATION (void);
 void printBook(struct Books book);
 		void printBookbypointer( struct Books *book );
  int main( ) 
  {
 printf("C structure tutorial\n");
  printf("***********STRUCTURE_DECLERATION_EXAMPLE**************\n");
STRUCTURE_DECLERATION ();
			 
			  return 0;
			   }
			   
			   
			   //structure decleration function
			   void STRUCTURE_DECLERATION (void)
			   {
			   	struct Books Book1; /* Declare Book1 of type Book */ 
  struct Books Book2; /* Declare Book2 of type Book */
   /* book 1 specification */
    strcpy( Book1.title, "C Programming"); 
	strcpy( Book1.author, "Nuha Ali"); 
	strcpy( Book1.subject, "C Programming Tutorial"); 
	Book1.book_id = 6495407; 
	/* book 2 specification */
	 strcpy( Book2.title, "Telecom Billing"); 
	 strcpy( Book2.author, "Zara Ali");
	  strcpy( Book2.subject, "Telecom Billing Tutorial");
	   Book2.book_id = 6495700; 
	   /* print Book1 info */
	    printBookbypointer(&Book1);
		   /* print Book2 info */
	printBookbypointer(&Book2);
			   }
			   
			   // print Book function
			   void printBook( struct Books book )
			    { 
				printf( "Book title : %s\n", book.title); 
				printf( "Book author : %s\n", book.author); 
				printf( "Book subject : %s\n", book.subject);
				 printf( "Book book_id : %d\n", book.book_id); 
				 }
			
			 // print Book by pointer function
			void printBookbypointer( struct Books *book ) 
			{ 
			printf( "Book title : %s\n", book->title); 
			printf( "Book author : %s\n", book->author);
			 printf( "Book subject : %s\n", book->subject); 
			 printf( "Book book_id : %d\n", book->book_id); 
			 }	 
				 
			