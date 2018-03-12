#include <stdio.h>
int main(void) {
	int low,high,i,sum=0,n=0,temp1,temp2,rem;
	scanf("%d%d",&low,&high);
	for(i=low+1;i<high;++i)
	{
		temp2=i;
		temp1=i;
	}
	while(temp1!=0)
	{
		temp1=temp2/10;
		++n;
	}
	while(temp2!=0)
	{
		rem=temp2%10;
		sum=sum+pow(rem,n);
		temp2=temp2/10;
	}
	if(sum==i)
	{
		printf("%d",i);
	}
	n=0;
	sum=0;
	return 0;
}
