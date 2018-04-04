#include <stdio.h>
int main() {
	char s[100];
	int n=0,i;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	    if(s[i]!=' ')
	    {
	        n++;
	    }
	}
	printf("%d",n);
	return 0;
}
