#include<stdio.h>
void fun(int h)
{
    float f;
    f=2.54*h;
    printf("%0.2f",f);
}
int main()
{
	int h;
	scanf("%d",&h);
	fun(h);
}