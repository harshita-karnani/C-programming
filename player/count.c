#include<stdio.h>
int count=100;        
void main()
{
int count=10;
printf("\nLocal variable is %d",count);
printf("\nblock scope value is is %d",count);
func1();
}
void func1()
{
printf("\nGlobal variable func1 is %d",count); 
}
