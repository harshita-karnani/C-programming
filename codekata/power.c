#include <stdio.h>
int main(void) {
	int ans=1,pow=3,a=2,i;
	scanf("%d",&a,&pow);
	for(i=0;i<pow;i++)
	{
		ans=ans*a;
	}
	printf("%d",ans);
	return 0;
}
