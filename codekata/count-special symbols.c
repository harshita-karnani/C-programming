#include <stdio.h>
int main(void) {
	char s[100];
	int len,i,count=0,count1=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='0' && s[i]<='9'||s[i]>='a' && s[i]<='z'||s[i]>='A' && s[i]<='Z'||s[i]==' '|| s[i]=='\n')
		{
		count++;
		}
		else
		{
			count1++;
		}
	}
	if(count1>0)
	printf("%d",count1);
	return 0;
}
