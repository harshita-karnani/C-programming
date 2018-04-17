#include <stdio.h>
#include<string.c>
int main(void) {
	int n,count=0,temp=0;
	scanf("%d",&n);
	while(n!=0)
	{
		temp=n%10;
		count++;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
