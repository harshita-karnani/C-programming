#include <stdio.h>
int main(void) {
	int n,a=1,b=1,i,c;
	scanf("%d",&n);
	printf("\n%d\n%d",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	return 0;
}
