#include <stdio.h>
void mergesort(int ar[], int l,int r);
void merge(int ar[],int l,int mid,int r);
void merge(int ar[],int l,int mid,int r)
{
	int n1=mid-l+1;
	int i,j;
	int n2=r-mid;
	int x[n1],y[n2];
	for(i=0;i<n1;i++)
	{
		x[i]=ar[l+i];
	}
	for(j=0;j<n2;j++)
	{
		y[j]=ar[mid+1+j];
	}
	int k=l;
	j=0,i=0;
	while( i<n1 && j<n2 )
	{
		if (x[i]<=y[j])
		{
			ar[k]=x[i];
			i++;
		}
		else
		{
			ar[k]=y[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		ar[k]=x[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		ar[k]=y[j];
		j++;
		k++;
	}
}
void mergesort(int ar[],int l,int r)
{
	if (l<r)
	{
		int mid=l+(r-l)/2;
		mergesort(ar,l,mid);
		mergesort(ar,mid,r);
		merge(ar,l,mid,r);
	}
}
int main()
{
	int n,i;
	printf("Enter size:");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	mergesort(ar,0,n-1);
	printf("Sorted array :");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
	return 0;
}


	                                                                               
	
	
	
