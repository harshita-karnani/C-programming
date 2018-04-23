#include <stdio.h>
int main(void) {
	char s[100];
	int i,n,alp=0,num=0;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		{
			alp=1;
		}
		if(s[i]>=1&&s[i]<=100)
		{
			num=1;
		}
	}
	if(alp==1&&num==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
