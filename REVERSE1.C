#include<stdio.h>
#include<conio.h>
typedef struct node{
int info;
struct node *next;
}n;
void push(n **,int);
void display(n *);
void reverse(n **);
int main()
{
n *head=NULL;
int num;
clrscr();
push(&head,num);
printf("inputed list is\n");
display(head);
reverse(&head);
printf("the reversed list is\n");
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
 scanf("%d",&p->info);
 p->next=*head;
 *head=p;
 }
 }

 void reverse(n **head)
 {
 n *prev=NULL,*next,*current;
 current=*head;
 while(current!=NULL)
 {
 next=current->next;
 current->next=prev;
 prev=current;
 current=next;
 }
 *head=prev;
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



