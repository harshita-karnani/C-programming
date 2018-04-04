#include <stdio.h>
#include<string.h>
int main(void) {
	char s[100];
	int i,count=0,len;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if((s[i]>='0')&& (s[i]<='9'))
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
