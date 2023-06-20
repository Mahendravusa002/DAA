#include<stdio.h>
int  maxx(int a,int b)
{
	int c=a>b?a:b;
	return c;
}
int kanpsack(int p[],int w[],int n,int mw)
{
	if(n==0||mw==0)
	{
		return 0;
	}
	if(w[n-1]<mw)
	{
		return maxx(p[n-1]+kanpsack(p,w,n-1,mw-w[n-1]),kanpsack(p,w,n-1,mw));
	}
	else
	{
		return kanpsack(p,w,n-1,mw);
	}
}
int main()
{
	int w[20],p[20],i,W,n,profit;
	printf("Enter the total number of items:");
	scanf("%d",&n);
	printf("Enter the Weight of the items:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("Enter the profits of the items:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter the maximum weight:");
	scanf("%d",&W);
	profit=kanpsack(p,w,n,W);
	printf("The maximum profits is %d",profit);
	return 0;
}

	
	
