#include<stdio.h>
int main()
{
	int i=0,j,pos,temp;
	int ar[8];
	while(i<8)
	{
		scanf("%d",&ar[i]);
		i++;
	}
	for(i=0;i<8;i++)
	{
		pos=i;
		for (j=i+1;j<8;j++)
		{
			if (ar[j]<ar[pos])
			{
				pos=j;
			}
		}
		if (pos!=i)
		{
			temp=ar[pos];
			ar[pos]=ar[i];
			ar[i]=temp;
		}
	}
	for(i=0;i<8;i++)
	{
		printf("%d\t",ar[i]);
	}
	return 0;
}

