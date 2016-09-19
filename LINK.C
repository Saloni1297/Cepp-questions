#include<stdio.h>
#include<conio.h>
typedef struct node{
int info;
struct node * next;
}n;
n *insertatbeg(n *);
void display(n *);
void  main()
{
n *head=NULL;
head=insertatbeg(head);
display(head);
getch();
}

n *insertatbeg(n *head)
{
int num,c=1,m;
n *temp;
printf("enter the number of node\n");
scanf("%d",&m);
while(c<=m  && temp!=NULL)
{
temp=(n *)malloc(sizeof(n));
temp->info=num;
	if(head==NULL)
	{
	temp->next=NULL;
	}
	else
	{
	temp->next=head;
	head=temp;
	}
}
	else
	{
	printf("there is no enough memory\n");
	}
	return head;
}

void display(n * head)
 {
	n *temp;
	temp=head;
	if(temp==NULL)
	{
	printf("linklist is empty\n");
	}
	else
	{
	while(temp->next!=NULL)
	{
	printf("%d",&temp->info);
	temp=temp->next;
	}
	}
 }