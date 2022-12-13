#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node*head;

struct Node* middle(struct Node*head)
{
	int cnt=0;
	struct Node* temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		cnt++;
	}
	temp=head;
	int a=cnt/2;
	if(cnt&2==0)
	a=a-1;

	while(a>0)
	{
		temp=temp->next;
		a--;
	}
	return temp;
}


int main()
{
	head=NULL;
	struct Node*first=(struct Node*)malloc(sizeof(struct Node));
	struct Node*second=(struct Node*)malloc(sizeof(struct Node));
	struct Node*third=(struct Node*)malloc(sizeof(struct Node));
	struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));
	struct Node*fifth=(struct Node*)malloc(sizeof(struct Node));
	
	head=first;
	first->data=9;
	first->next=second;
	
	second->data=8;
	second->next=third;
	
	third->data=10;
	third->next=fourth;
	
	fourth->data=20;
	fourth->next=fifth;
	
	fifth->data=25;
	fifth->next=NULL;
	
	struct Node* l=middle(head);
	printf("%d",l->data);
	

	return 0;
}
	

