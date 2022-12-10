#include "file_main.h"
#include <stdio.h>										
#include <stdlib.h>
#include <string.h>

 node *createnode(void)
 {
	 node *newnode=(node*)malloc(sizeof(node));		
	 printf("File name: ");	scanf("%s",(newnode->data).name);	
	 printf("File extension: ");	scanf("%s",(newnode->data).extension);	
	 newnode->next=NULL;
	 return newnode;	
 } 