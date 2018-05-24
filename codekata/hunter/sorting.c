#include <stdio.h>
int main(void) {
	int a[100],i,n,j,temp,temp1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
            for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				if(a[i]!=temp1)
				{
					printf("%d",a[i]);
					temp1=a[i];
					break;
				}
			}
		}
	}
	
}
