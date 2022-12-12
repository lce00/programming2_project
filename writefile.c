#include <stdio.h>										
#include <stdlib.h>
#include <string.h>
#include "main.h"

void writefile(node *phead)
{
	node *ptr=phead;
	int i='1';
	FILE *des=fopen("file_db.txt","wt");	
 
	if(ptr==NULL)
		return;
	else
	{
		while(ptr!=NULL)
		{
			fputs("File",des);fputc(i,des);fputs("\n",des);
			fputs("File name:",des);fputs(ptr->data.name,des);fputs("\n",des);
			fputs("File extension:",des);fputs(ptr->data.extension,des);fputs("\n",des);
            fputs("\n",des);			
			ptr=ptr->next;
			i++;
		}
	}
	fclose(des);
	return;
}