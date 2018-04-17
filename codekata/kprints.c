#include <stdio.h>
int main(void) {
	char s[100];
	int i,n;
	gets(s);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%s",s);
	}
	return 0;
}
