#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n%4==0)
	{
	if(n%100==0)
	{
		if(n%400==0)
		{
			printf("leap year");
		}
		else
		{
			printf("not a leap year");
		}
		
	}
	else
	printf("leap year");
	}
	else
	printf("not a leap year");
}
