#include <stdio.h>
int main(void) {
	int c,d,i;
	scanf("%d%d",&c,&d);
	for(i=c+1;i<d;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
