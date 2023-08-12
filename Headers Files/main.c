/* 
main.c
Author:Kirollos Gerges
*/

#include <stdio.h>
#include "header.h"


int main (void)
{

int *fun_ptr;
	fun_ptr=&test;
	printf("%d",fun_ptr);
	return 0;
}