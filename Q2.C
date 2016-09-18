//Find doublet present in  an array or not

#include<stdio.h>
#include<conio.h>
int abs(int );
int main()
{
int a[10],n,i,flag=1,count=1,temp=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[abs(a[i])]>0 && a[abs(a[i])]!=n)
	   { 
                      a[abs(a[i])]=-1*a[abs(a[i])]; 
                   }

	else if(a[abs(a[i])]<0 || a[abs(a[i])]==n)
	{
	      temp=abs(a[i]);
	        flag++;
	        if(flag<=count)
	           { 
                               count=flag;
	            }
	        else if (flag>count)
	            {
	               printf(" %d is %d times ",temp,count);
	            }
	}

	else
	{
	     a[abs(a[i])]=n;
	}
}

if(count==0)
{
printf("no doublet is present");
}
return 0;
getch();
}

   int abs(int a)
   {
if (a>0)
return a;
else
return
a=-1*a;
   }

