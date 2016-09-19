#include<stdio.h>
#include<conio.h>
struct node{
int info;
struct node *next;
}
typedef struct node n;
int main()
{
int num,m,c=0;
n *p,*right=NULL,*left=NULL,temp;
printf("enterr the no of node\n");
scanf("%d",&m);
while(c<m && p!=NULL)
{
p=(n *)malloc(sizeof(n *));
printf("enter the number to be inserted\n");
scanf("%d",&num);
p->info=num;
p->next=NULL;
if(right==NULL)
{
right=p;
left=p;
}
else
{
	if(num<left->info)
	{
	p->next=left;
	left=p;
	}
	else
	{
	right->next=p;
	right=p;
	}
}
c++;
}
temp=left;
while(temp!=NULL)
{
printf("%d",temp->info);
temp=temp->next;
}
getch();
return 0;
}
