#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,i,max=0,k=0;
clrscr();
    printf("enter the limit");
     scanf("%d",&n);
    printf("enter the array element");
         for(i=0;i<n;i++)
             {
                scanf("%d",&a[i]);
             }
                 for(i=0;i<n;i++)
                   {
                      max=max^a[i];
                   }

                        for(i=2;i<=n+1;i++)
                          {
                                 k=k^i;
                          }
printf("this is the missing number %d",max^k);
getch();
return 0;
}