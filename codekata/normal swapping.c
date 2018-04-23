#include <stdio.h>
int main(void) {
	int x,y,temp;
	scanf("\n%d\n%d",&x,&y);
	temp=x;
	x=y;
	y=temp;
	printf("\n%d\n%d",x,y);
	return 0;
}
