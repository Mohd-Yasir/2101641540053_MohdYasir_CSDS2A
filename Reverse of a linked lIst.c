#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node*head;

struct Node* reverse(struct Node* head)
{
	struct Node* curr=head;
	struct Node* prev=NULL;
	struct Node* forw=NULL;
	
	while(curr!=NULL)
	{
		forw=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forw;
	}
	return prev;
}

int main()
{
	head=NULL;
	struct Node*first=(struct Node*)malloc(sizeof(struct Node));
	struct Node*second=(struct Node*)malloc(sizeof(struct Node));
	struct Node*third=(struct Node*)malloc(sizeof(struct Node));
	
	head=first;
	first->data=9;
	first->next=second;
	
	second->data=8;
	second->next=third;
	
	third->data=10;
	third->next=NULL;
	
	head=reverse(head);
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}
	

