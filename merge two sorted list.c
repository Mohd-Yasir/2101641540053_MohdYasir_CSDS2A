
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* head1;
struct node* head2;
struct node* head3;

void merge()
{
	struct node* s=head1;
	struct node* t=head2;
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	head3=temp;
	
	while(s!=NULL && t!=NULL)
	{
		if(s->data<t->data)
		{
			temp->data=s->data;
			s=s->next;
		}
		else
		{
			temp->data=t->data;
			t=t->next;
		}
		temp=temp->next;
	}
	while(s!=NULL)
	{
		temp->data=s->data;
		temp=temp->next;
		s=s->next;
		
	}
	while(t!=NULL)
	{
		temp->data=t->data;
		temp=temp->next;
		s=s->next;
	}
}
void display()
{
	struct node* temp=head3;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* second=(struct node*)malloc(sizeof(struct node));
	struct node* third=(struct node*)malloc(sizeof(struct node));
	struct node* fourth=(struct node*)malloc(sizeof(struct node));
	struct node* fifth=(struct node*)malloc(sizeof(struct node));
	
	head1=first;
	first->data=5;
	first->next=second;
	
	second->data=7;
	second->next=third;
	
	third->data=8;
	third->next=fourth;
	
	fourth->data=10;
	fourth->next=fifth;
	
	fifth->data=11;
	fifth->next=NULL;
	
	struct node* first2=(struct node*)malloc(sizeof(struct node));
	struct node* second2=(struct node*)malloc(sizeof(struct node));
	struct node* third2=(struct node*)malloc(sizeof(struct node));
	
	head2=first2;
	
	first2->data=3;
	first2->next=second2;
	
	second2->data=6;
	second2->next=third2;
	
	third2->data=9;
	third2->next=NULL;
	
	merge();
	display();
	
}
