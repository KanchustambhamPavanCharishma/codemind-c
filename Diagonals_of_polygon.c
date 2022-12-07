#include<stdio.h>
void fun(int n)
{
    int p;
    p=n*(n-3)/2;
    printf("%d",p);
}
int main()
{
    int n,p;
    scanf("%d",&n);
    fun(n);
}