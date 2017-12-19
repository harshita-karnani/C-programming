#include<stdio.h>
int main(void)
{
int i,n;
float a[100];
printf("\nenter the numbers");
scanf("%d",n);
printf("\n");
for(i=0;i<n;++i)
{
printf("%d",i+1);
scanf("%f",a[i])
}
for(i=1;i<n;++i)
{
if(a[0]<a[i])
{
a[0]=a[i]
}
printf("%f",a[0]);
}
