#include<stdio.h>
void fun(int a,int b)
{
    float c;
    c=(a+b)/2.0;
    printf("Average of %d and %d is: %0.2f",a,b,c);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	fun(a,b);
}