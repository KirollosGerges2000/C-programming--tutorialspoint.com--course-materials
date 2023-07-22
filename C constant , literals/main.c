/*
main.c
Author:Kirollos Gerges
*/

#include <stdio.h>
//define preProcessing
#define LENGTH 10
 #define WIDTH 5 
 #define NEWLINE '\n'
 //const Keyword
 const int LENGTH_C = 10;
	 const int WIDTH_C = 5;
	  const char NEWLINE_C = '\n'; 
// EX1 character constant
 int main() 
 { 
 printf("Hello\bWorld\n\n");  //Backspace
 printf("Hello\tWorld\n\n");  //Horizantal Tab
 printf("Hello\vWorld\n\n"); //vertical Tab 

 
 //EX2 String Literals
 
 printf("HellWorld\n\n");  //Backspace
 printf("Hello  World\n\n");  //Horizantal Tab
 printf("HelloWorld\n\n"); //vertical Tab 
 
 // EX3 define preProcessing

 
  int area=0;
   area = LENGTH * WIDTH; 
   printf("value of area : %d", area);
    printf("%c", NEWLINE);
	
	// EX4 const Keyword
	
	  int area_C=0; 
	  area_C = LENGTH_C * WIDTH_C;
	   printf("value of area : %d", area_C); 
	   printf("%c", NEWLINE_C);
	 
	 
 return 0; 
 }
 
 