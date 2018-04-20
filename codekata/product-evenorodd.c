#include <stdio.h>
int main(void) {
	int N,M,t;
	scanf("%d%d",&N,&M);
	t=N*M;
	if(t%2==0)
	{
		printf("%d is even",t);
	}
	else
	{
		printf("%d is odd",t);
	}
	return 0;
}
