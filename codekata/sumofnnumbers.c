#include <stdio.h>
#include<math.h>
int main(void) {
	int n,i,sum=0;
	scanf("%d",&n);
	if(n>0)
	{
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	}
	printf("%d",sum);
	return 0;
}
