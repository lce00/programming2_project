 typedef struct element	
 {						
 	char name[20];
 	char extension[20];
 }element;
 typedef struct node	
 {
 	struct element data;
 	struct node * next;	
 }node;

node *createnode(void);
void insert(node **phead,node *newnode);
node *search(node *phead);
void delete(node **phead, node *remove);
void display(node *head);
void writefile(node *phead);