#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;
};
void display(struct node *);
struct node* insett(int,struct node *);

void main()
{
struct node *first, *second, *third;
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

first->info=1;
first->link=second;

second->info=2;
second->link=third;

third->info=3;
third->link=NULL;

display(first);
}

void display(struct node *first)
{
struct node *save;
save=first;
while(save!=NULL)
	{
	printf("%d",save->info);
	save=save->link;
	}

}
struct node* insert(int x,struct node *first)
{
struct node *new;
new=(struct node *)malloc(sizeof(struct node));
if(new==NULL)
	{
	printf("overflow");
	return first;	
	}
else
	{
	if(first=NULL)
		{	
		new->link=NULL;
		return new;		
		}
	}
}




