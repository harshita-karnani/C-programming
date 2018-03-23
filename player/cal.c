#include<stdio.h>
int main(void)
{
int add,subtract,multiply,divide,remainder,a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
add=a+b;
subtract=a-b;
multiply=a*b;
divide=a/b;
remainder=a%b;
printf("%d%d%d%d%d",add,subtract,multiply,divide,remainder);
}
