#include<stdio.h>
#include<conio.h>
int func(int [],int);
int main()
{
int a[100],n,max=0,i;
 printf("Enter the limit of array");
 scanf("%d",&n);
 printf("enter the elements of array");
      for(i=0;i<n;i++)
       {
	 scanf("%d",&a[i]) ;
       }
 max=func(a,n);
 printf("%d",max);
 return (0);
 getch();
 }

  int func(int a[],int n)
  {
       int maxdiff=a[1]-a[0],i;
	 int  min=a[0];
	      for(i=1;i<n;i++)
		 {
		                if(a[i]<min)
			 {
		                    min=a[i];
			 }

			if(a[i]-min>maxdiff)
			{
			   maxdiff=a[i]-min;
			}

		 }

   return maxdiff;
   }

