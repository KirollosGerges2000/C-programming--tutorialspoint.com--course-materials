/*
main.c
Author:kirollos Gerges
*/

#include <stdio.h> 
#include <stdlib.h>

void main() 
{
 FILE *fp; 
 char buff[100];
  fp = fopen("/tmp/test.txt", "r"); 
  fscanf(fp, "%s", buff); 
  printf("1 : %s\n", buff );
   fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff ); 
	fgets(buff, 255, (FILE*)fp); 
	printf("3: %s\n", buff ); 
	fclose(fp); 
	}