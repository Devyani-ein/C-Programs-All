//Insertion in linkedList

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
	while(ptr != NULL)
	{
		printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}

struct Node * insertAtFirst(struct Node *head, int x){
	struct node *ptr;
	ptr = (struct Node*) malloc(sizeof(struct Node));
	if(ptr== NULL)
	{
		printf("Overflow\n");
	return head;
	}
	else
	{
	ptr->data = x;
	if(head==NULL)
	{
		ptr->next=NULL;
		return ptr;
	}
	else
	{
		ptr->next = head;
		return ptr;
	}
}

struct Node * insertAtEnd(struct Node *head, int x){
	struct Node * ptr;
	struct Node *save;
	ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = x;
	ptr->next=NULL;
	if(first==NULL)
	{
		return ptr;
	}
	save=head;
		
	while(save->next!=NULL){
		save = save->next;
	}
	save->next = ptr;
	return head;
}

struct Node * insertbetween(struct Node *head, int x){
	struct node * ptr; 
	struct Node * save = head;
	ptr= (struct Node *) malloc(sizeof(struct Node));
	ptr->data=x;	
	if(head==NULL)
	{
		ptr->next=NULL;
		return ptr;
	}
	if(ptr->data <= head->data)
	{
		ptr->data=head;
		return ptr;	
	}
	save=head;
	while(save->next!=NULL && (ptr->data >= (save->data)->data))
	{
		save = save->next;
	}
	ptr->next = save->next;
	save->next = ptr;
	return head;
}
struct Node* delete(int x,struct Node * head)
{	
	struct Node *ptr;
	struct Node *save;
	struct Node *prec;	
	ptr->data=x;
	if(head==NULL)
	{
		printf("Underflow\n");
		return head;
	}
	save=head;
	while(save!=ptr && save->ptr!=NULL)
	{
		save=save->next;
	}
	prec=save;
	if(save!=ptr)
	{
		printf("\nNode not found\n");
		return ptr;
	}
	if(ptr=head)
		head=head->next;
	else
		prec->next=ptr->next;

}
int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;


	//allocate memory  for nodes in linked list in heap
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	

	//Link first and second nodes

	head->data = 7;
	head->next = second;

	//Link second and third nodes

	second->data = 8;
	second->next = third;

	//Link thirds and fourth
	third->data = 11;
	third->next = fourth;

	
	fourth->data = 21;
	fourth->next = NULL;

	printf("Linked List Before insertion\n");
	linkedListTraversal(head);
	head=insertAtFirst(head,12);
	//head=insertAtIndex(head, 12, 1);
	//head = insertAtEnd(head,12);
	printf("\nLinked List after insertion\n");
	linkedListTraversal(head);	
return 0;
}





