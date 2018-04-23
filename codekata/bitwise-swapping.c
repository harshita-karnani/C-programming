#include <stdio.h>
int main(void) {
	int x,y;
	scanf("\n%d\n%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("\n%d\n%d",x,y);
	return 0;
}
