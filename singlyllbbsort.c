#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node* create (struct node* head)
{
	int i,n;
	struct node* newnode,*temp;
	printf("\n enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter value:");
		scanf("%d",&(newnode->data));
		newnode->next=NULL;
		if(head=newnode==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return head;
}
void dis(struct node* head)
{
	struct node* temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
struct node* bubble_sort(struct node* head)
{
	int t,struct node* pass,i;
	for(pass=head;pass->nest!=NULL;pass->next)
	{
		for(struct node* i=head;i->next!=NULL;i=i->)
	}
}
