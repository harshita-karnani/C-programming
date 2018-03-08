#include <stdio.h>
int main(void) 
{
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
	{
		printf("n1 is largest");
	}
		if(n2>n1&&n2>n3)
		{
			printf("n2 is largest");
		}
			else
			{
			printf("n3 is largest");
	}
	return 0;
}
