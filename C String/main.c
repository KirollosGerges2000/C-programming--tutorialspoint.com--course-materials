/*
main.c
Author:kirollos Gerges
*/
#include <stdio.h>
#include <string.h>
//protrotypes
	void string_functions(void);
 int main ()
  {
   //char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   char greeting[] = "Welcome to C programming tutorials point.com";
    printf("Greeting message: %s\n", greeting );
	  printf("***************String Functions***************** \n");
	string_functions();
	return 0; 
	}
	
	
	void string_functions(void)
	{
		char str1[12] = "Hello"; 
		char str2[12] = "World";
		 char str3[12];
		  int len ; 
		  /* copy str1 into str3 */
		   strcpy(str3, str1); printf("strcpy( str3, str1) : %s\n", str3 );
		    /* concatenates str1 and str2 */ 
			strcat( str1, str2); printf("strcat( str1, str2): %s\n", str1 ); 
			/* total lenghth of str1 after concatenation */
			 len = strlen(str1); printf("strlen(str1) : %d\n", len );
	}