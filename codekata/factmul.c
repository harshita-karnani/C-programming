#include<stdio.h>
int main(void)
{
	int fact=1;
	int i;
	int n;
	scanf("%d",&n);
	int sum;
	for(i=1;i<6;i++)
	{
		sum=n*i;
	  printf("%d=%d*%d",sum,n,i);
	  printf("\n");
	}
}
