#include<stdio.h>
void fun(int n,int i,int num=0)
{
   for(i=0;i<=n;i++)
    {
        num=num+i;
    }
    printf("%d",num); 
}
int main()
{
    int n,i,num=0;
    scanf("%d",&n);
    fun(n,i);
}