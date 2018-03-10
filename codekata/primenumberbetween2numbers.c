include<stdio.h>
int main()
{
int n,c,d,i,count;
printf("enter the two limits");
scanf("%d%d",&c,&d);
for(i=c;i<d;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d\n",i);
}
}
