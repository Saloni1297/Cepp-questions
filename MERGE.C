#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int ,int);
void merge(int a[],int,int,int);
int main()
{
int i,a[100],n;
clrscr();
printf("enter the number of nodes\n");
scanf("%d",&n);
printf("enter the elemnet of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("the sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}

void mergesort(int a[],int i,int j)
{
int mid;
printf("the entered value of i is %d and j is %d\n",i,j);
	if(i<j)
	{
	mid=(i+j)/2;
	mergesort(a,i,mid);
	mergesort(a,mid+1,j);
	merge(a,i,j,mid);
	}
}

void merge(int a[],int i,int j,int mid)
{
int b[100],start,l,k;
start=i;
k=mid+1;
l=i;
while(i<=mid && k<=j)
if(a[i]>=a[k])
b[l++]=a[k++];
else
b[l++]=a[i++];
while(i<=mid)
b[l++]=a[i++];
while(k<=j)
b[l++]=a[i++];
for(l=start;l<=j;l++)
a[l]=b[l];
}
