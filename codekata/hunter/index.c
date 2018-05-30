#include <stdio.h>
int main(void) {
	int i,j,temp,n,a[100],b[100],k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			b[k++]=a[i];
		}
	}
	if(k==0)
	{
		printf("-1");
	}
	else
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]>a[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}
