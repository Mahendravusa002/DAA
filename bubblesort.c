#include<stdio.h>
int main()
{
	int i,j,temp;
	int ar[8];
	for (i=0;i<8;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<8-1;i++)
	{
		for (j=0;j<8-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	for(i=0;i<8;i++)
	{
		printf("%d\t",ar[i]);
	}
	return 0;
}

