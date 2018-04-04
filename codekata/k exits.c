#include <stdio.h>
int main(void) {
	int i,k,n,a[100],count=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]==k)
	{
		count=1;
	}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
