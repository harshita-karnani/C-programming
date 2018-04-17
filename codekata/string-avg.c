#include <stdio.h>
#include<string.h>
int main(void) {
	int a[10],i,sum=0,n;
	int avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	printf("%d",sum);
	printf("%d",avg);
	return 0;
}
