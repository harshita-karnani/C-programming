#include <stdio.h>
int main(void) {
	int rev=0,rem,n,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(t==rev)
	{
		printf("%d is palindrome",t);
	}
	else
	{
		printf("%d is not a palindrome",t);
	}
	return 0;
}
