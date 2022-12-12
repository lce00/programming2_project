#include <stdio.h>										
#include <stdlib.h>
#include <string.h>
#include "main.h"

int cfile(node *head){
    node *p1=head;
    element el;

    //printf("Comparing file name: ");
    //scanf("%s", cfile_name);

    //char cmp = "c";

    printf("Search with extension name: ");
    scanf("%s", el.extension);

    while(p1!=NULL){
        if(!strcmp(p1->data.extension, el.extension)){
            p1->data.name;
            printf("Existing files: "); printf("%s\n",(p1->data).name);
            strncpy(comp_name,p1->data.extension,sizeof(comp_name));
        }
        p1=p1->next;
    }
    return (!strcmp(cfile_name, comp_name)) ? 0:1;
    

}

void print_cfile(node *head, int(*func)(node*)){
    node *p=head;
    if(!func(p)) printf("Cfile\n");
    else printf("Not cfile\n");
}