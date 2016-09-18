#include<stdio.h>
#include<conio.h>
int main()
{
int arr[100],n,sum=0,sum1=0,pro=1,pro1=1,diff=0,a=0,b=0,i,sum2,pro2;
clrscr();
	printf("Enter the limit");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	sum+=arr[i];
	}
	for(i=1;i<=n+2;i++)
	{
	sum1+=i;
	}
	sum2=sum1-sum;
	for(i=0;i<n;i++)
	{
	pro=pro*arr[i];
	}
	for(i=1;i<=n+2;i++)
	{
	pro1=pro1*i;
	}
	pro2=pro1/pro;

	diff=sqrt(sum2*sum2-4*pro2);
	a= ( sum2+diff)/2;
	b=sum2-a;
	printf(" %d%d are missing number",a,b);
	getch();
	return 0;
}