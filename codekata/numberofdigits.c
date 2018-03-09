#include <stdio.h>
int main(void) {
	int a,count=0;
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
