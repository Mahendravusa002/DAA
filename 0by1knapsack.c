#include<stdio.h>
void swapp(float *a,float *b)
{
	float temp=*a;
	*a=*b;
	*b=temp;
}	
int main()
{
	int N; 
	printf("Enter count of wieghts:");
	scanf("%d",&N);
	float wei[N],val[N],knap[N],s=0,ben=0;
	float valden[N];
	int weight,i,j;
	printf("Enter bag weight capacity:");
	scanf("%d",&weight);
	printf("Enter weights -- values:\n");
	for(i=0;i<N;i++)
	{
		scanf("%f",&wei[i]);
		scanf("%f",&val[i]);
		valden[i]=val[i]/wei[i];
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<N-i-1;j++)
		{
			if (valden[j+1]> valden[j])
			{
				swapp(&valden[j],&valden[j+1]);
				swapp(&wei[j+1],&wei[j]);
				swapp(&val[j+1],&val[j]);
			}
		}
	}
	i=0;
	while(1)
	{
		s=s+wei[i];
		if (s<=weight)
		{
			knap[i]=s;
			ben=ben+val[i];
			i++;
		}
		else
		{
			/*knap[i]=weight;
			int tem=weight-knap[i-1];
			ben=ben+tem*valden[i];*/
			break;
		}
		
	}
	/*for (j=0;j<N;j++)
	{
		printf("\n%f\t",wei[j]);
		printf("%f\t",val[j]);
		printf("%f\t",valden[j]);
	}*/
	/*printf("KNAP bag contains:\n");
	for (j=0;j<=i;j++)
	{
		printf("%f\t",knap[j]);
	}*/
	printf("\nTotal benefit: %f",ben);
	return 0;
}
