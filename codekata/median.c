#include <stdio.h>
int main(void) {
	int x[100],i,n;
	float median(int ,int[]);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		printf("%f",median(n,x));
	}
	float median(int n,int x[])
	{
		int i,j;
		float temp;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(x[j]<x[i])
				{
					temp=x[j];
					x[j]=x[i];
					x[i]=temp;
				}
			}
		}
	}
	if(n%2==0)
	{
		median=(x[n/2]+x[n/2-1])/2;
	}
	else
	{
		median=x[n+1/2];
	}
	printf("%f",x[median]);
	return 0;
}
 
