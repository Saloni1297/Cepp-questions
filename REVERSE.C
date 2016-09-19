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
push(&head,3);
push(&head,4);
push(&head,7);
push(&head,8);
push(&head,1);
printf("inputed list is\n");
display(head);
reverse(&head);
printf("the reversed list is\n");
getch();
return 0;
}
 void push(n **head,int num)
 {
 n *p;
 p=(n *)malloc(sizeof(n *));
 p->info=num;
 p->next=*head;
 *head=p;
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



