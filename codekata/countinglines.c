#include <stdio.h>
int main(void) {
	char s[100];
	int i,count=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='.')
		{
			count++;
		}
	}
	printf("%d",count+1);
	return 0;
}
