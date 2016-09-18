#include<stdio.h>
#include<conio.h>
#define max 100
void quick(int [],int,int);
int partition(int [],int,int);
void main()
{
int i=0,n,a[max],l,h;
printf("enter the limit");
scanf("%d",&n);
printf("enter the array element");
	    for(i=0;i<n;i++)  
                 {
	      scanf("%d",&a[i]);
	 }
l=0;
h=n-1;
quick(a,l,h);
	   for(i=0;i<n;i++)
	    {
	        printf("%d",a[i]);
	    }
getch();
}

void quick(int a[],int l,int h)
{
     int pivot;
            if(l<h)
            {
                        pivot=partition(a,l,h);
                        quick(a,l,pivot-1);
                        quick(a,pivot+1,h);
            }
}

int partition(int a[],int l,int h)
{
int temp=0;
 int pivot=a[h];
             while(l<h)
       {
            while(a[l]<pivot)
               {
                       l++;
               }
            while(a[h]>=pivot)
               {
                       h--;
               }
                      if(l<h)
                      {
                            temp=a[l];
                            a[l]=a[h];
                            a[h]=temp;
                      }
        }
a[h]=a[l];
a[l]=pivot;
return l;
}

