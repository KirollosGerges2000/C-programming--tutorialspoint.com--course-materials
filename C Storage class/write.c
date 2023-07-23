/*
write.c
Author:Kirollos Gerges
*/
#include <stdio.h> 
extern int counter; 
void write_extern(void) 
{
 counter = 5;
printf("count is %d\n", counter);
}