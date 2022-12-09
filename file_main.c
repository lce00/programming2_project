#include <stdio.h>										
#include <stdlib.h>
#include <string.h>
#include "file_main.h"


int main()
 {
 	node *head=NULL;	
 	int num=0;
 	int in=0;
	node *se;	   
	int i=0;
 
	FILE *des=fopen("file_db.txt","rt");	
 
	if(des==NULL)
	{
		printf("Unable to read file!\n");
		return -1;	
	}
	while(feof(des)==0)
	{
		char ch;
		ch=fgetc(des);
		if(ch==':')
		{
			char name[20];
			char extension[20];
			if(i%2==0)
				fgets(name,sizeof(name),des);
			else if(i%2==1)
			{
				int j=0;
				node *newnode=(node *)malloc(sizeof(node));
				newnode->next=NULL;
				fgets(extension,sizeof(extension),des);
				for(j=0;j<20;j++)
				{
					if(name[j]=='\n')	
						name[j]=0;
 
					if(extension[j]=='\n')	
						extension[j]=0;
				}
				strncpy(newnode->data.name,name,sizeof(newnode->data.name));	
				strncpy(newnode->data.extension,extension,sizeof(newnode->data.extension));
				insert(&head,newnode);
			}
			i++;
		}
	}
	fclose(des);

 	while(1)
 	{
 		printf("*****MENU*****\n");
 		printf("1.Insert\n");
 		printf("2.Delete\n");
 		printf("3.Search\n");
 		printf("4.Print All\n");
 		printf("5.Exit\n");
 		printf("Select the menu: ");
 		scanf("%d",&num);
 
		switch(num)		
 		{
 		case 1:
 			insert(&head,createnode());
 			break;
 		case 2:
 			delete(&head,search(head));
 			break;
 		case 3:
 			se=search(head);
			if(se!=NULL)
			{
				printf("File name : %s ",se->data.name);
				printf("File extension : %s\n",se->data.extension);
			}
			else
			{
				printf("No file!");printf("\n");
			}
 			break;
 		case 4:
 			display(head);
 			break;
 		default:
			writefile(head);
 			break;
 		}
 		if(num==5)
 			break;
 	}
 	return 0;
 }