#include <stdio.h>
int main(void) {
	int n,t,rem,sum=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		rem=t%10;
    sum=sum+rem*rem*rem;
    t=t/10;
	}
	if(sum==n)
	{
		printf("%d is armstrong number",n);
	}
	else
	{
		printf("%d is not armstrong number",n);
	}
	return 0;
}
