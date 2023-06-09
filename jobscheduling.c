#include<stdio.h>
void swapp(int *a,int* b)
{
	int te=*a;
	*a=*b;
	*b=te;
}
int main()
{
	int n,i,j,maxx=-1,maxpro=0;
	printf("Enter the no:of jobs");
	scanf("%d",&n);
	int a[3][n];
	printf("Enter Job:-> deadline:->profit:\n");
	for (i=0; i<n;i++)
	{
		scanf("%d",&a[0][i]);
		scanf("%d",&a[1][i]);
		if (maxx<a[1][i])
		{
			maxx=a[1][i];
		}
		scanf("%d",&a[2][i]);
	}
	printf("maximum dead line:%d\n",maxx);
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[2][j]<a[2][j+1])
			{
				swapp(&a[0][j],&a[0][j+1]);
				swapp(&a[1][j],&a[1][j+1]);
				swapp(&a[2][j],&a[2][j+1]);
			}
		}
	}
	int tmst[maxx];
	for(i=0;i<maxx+1;i++)
	{
		tmst[i]=0;
	}
	for (i=0;i<n;i++)
	{
		if (tmst[a[1][i]]==0)
		{
			tmst[a[1][i]]=a[0][i];
			maxpro=maxpro+a[2][i];
		}
		else
		{
			for (j=1;j<a[1][i];j++)
			{
				if (tmst[j]==0)
				{
					tmst[j]=a[0][i];
					maxpro=maxpro+a[2][i];
					break;
				}
			}
		}
	}
	printf("Maximum profit:%d\n",maxpro);
	/*for(i=0;i<maxx+1;i++)
	{
		printf("%d\t",tmst[i]);
	}
	for(i=0; i<n;i++)
	{
		printf("%d\t",a[0][i]);
		printf("%d\t",a[1][i]);
		printf("%d\n",a[2][i]);
	}*/
	return 0;
}

	
		
