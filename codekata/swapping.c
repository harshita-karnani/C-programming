#include <stdio.h>
int main(void) {
	int x,y,temp;
	scanf("%d%d",&x,&y);
	printf("before swapping \nx=%d\ny=%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("\nafter swapping\nx=%d\ny=%d",x,y);
	return 0;
}
