#include<stdio.h>
#include<conio.h>
typedef struct node{
int info;
struct node *next;
}n;
void push(n **,int);
void display(n *);
void sort(n **);
int count(n *);
int main()
{
n *head=NULL;
int num;
clrscr();
push(&head,num);
printf("inputed list is\n");
display(head);
sort(&head);
getch();
return 0;
}
 void push(n **head,int num)
 {
 int m,c=0;
 n *p;
 printf("enter the node to be entered\n");
 scanf("%d",&m);
 while(c<m && p!=NULL)
 {
 p=(n *)malloc(sizeof(n *));
 printf("enter the number to be inputed\n");
 scanf("%d",&num);
 p->info=num;
 p->next=*head;
 *head=p;
 c++;
 }
 }

 void sort(n **head)
 {
 n *p,*temp=NULL;
 int i,j,temp1=0,num;
 p=*head;
 if(*head==NULL)
 return ;
 num=count(*head);

 for(i=0;i<num-1;i++)
 {
	 temp=p->next;
	for(j=i+1;j<num;j++)
	{
	if(p->info>temp->info)
	{
	temp1=p->info;
	p->info=temp->info;
	temp->info=temp1;
	}
	temp=temp->next;
	}

 p=p->next;
 }
 printf("the sorted array is \n");
 display(*head);
 }

 void display( n *head)
 {
 n *p;
 p=head;

 while(p!=NULL)
 {
 printf("%d",p->info);
 p=p->next;
 }
 }

 int count(n *head)
 {
 int c=0;
 n *p;
 p=head;
 if(head==NULL)
 {
 return c;
 }
 else
 {
 while(p!=NULL)
 {
 p=p->next;
 c++;
 }
 }
  return c;
  }
