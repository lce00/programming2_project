#include "file_main.h"
#include <stdio.h>										
#include <stdlib.h>
#include <string.h>

 void display(node *head)
 {
	 int i=1;
	 node *p=head;
	 while(p!=NULL)
	 {
		 printf("Execution %d\n",i);
		 printf("File name: %s\n",(p->data).name);
		 printf("File extension: %s\n\n",(p->data).extension);
		 p=p->next;
		 i++; 
	 }
 }