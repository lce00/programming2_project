#include <stdio.h>										
#include <stdlib.h>
#include <string.h>
#include "main.h"

 node *search(node *phead)
 {
	 node *ptr=phead;
	 element el;
	 printf("File name: ");	scanf("%s",el.name);
	 while(ptr!=NULL)
	 {
		 if(!strcmp(ptr->data.name,el.name))	
			 return ptr;	
		 ptr=ptr->next;
	 }
	 return NULL;
 }
