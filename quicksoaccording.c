#include<stdio.h>
int partition(int ar[],int l,int r);
void quicksort(int ar[],int l,int r);
void swap(int *a,int *b);
int main()
{
	int n;
	printf("Enter sizeof array:");
	scanf("%d",&n);
	int ar[n];
	int i,l=0;
	int r=n-1;
	for (i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	quicksort(ar,l,r);
	printf("Sorted array:\t");
	for (i=0; i<n;i++)
	{
		printf("%d \t",ar[i]);
	}
	return 0;
}
void quicksort(int ar[],int l,int r)
{
	if (l<r)
	{
		int p=partition(ar,l,r);
		quicksort(ar, l,p-1);
		quicksort(ar,p+1,r);
	}
}
int partition(int ar[],int l,int r)
{
	int j;
	int pivot=ar[r];
	int i=l-1;
	for(j=l;j<r;j++)
	{
		if (ar[j]<pivot)
		{
			i++;
			/*int temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;*/
			swap(&ar[i],&ar[j]);
		}
	}
	/*int tmp=ar[i+1];
	ar[i+1]=ar[r];
	ar[r]=tmp;*/
	swap(&ar[i+1],&ar[r]);
	return i+1;
	
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

	
	
		
			
