#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node* head=NULL;
void print()
{
	struct node* temp=head;
	printf("Link list: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
}
int main()
{
	
	int n;
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* second=(struct node*)malloc(sizeof(struct node));
	struct node* third=(struct node*)malloc(sizeof(struct node));
	struct node* fourth=(struct node*)malloc(sizeof(struct node));
	struct node* fifth=(struct node*)malloc(sizeof(struct node));
	head=first;
	printf("Enter the 5 elements of linked list:\n");
	printf("Enter first data: ");
	scanf("%d",&n);
	first->data=n;
	first->next=second;
	
	printf("Enter second data: ");
	scanf("%d",&n);
	second->data=n;
	second->next=third;
	
	printf("Enter third data: ");
	scanf("%d",&n);
	third->data=n;
	third->next=fourth;
	
	printf("Enter fourth data: ");
	scanf("%d",&n);
	fourth->data=n;
	fourth->next=fifth;
	
	printf("Enter fifth data: ");
	scanf("%d",&n);
	fifth->data=n;
	fifth->next=NULL;
	
	print();
	
	
	
}
