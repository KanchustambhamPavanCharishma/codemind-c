#include<stdio.h>
int fun(int p,int t,int r)
{
    int si;
    si=(p*t*r)/100;
    return si;
}
int main()
{
    int p,t,r,si;
    scanf("%d%d%d",&p,&t,&r);
    int k=fun(p,t,r);
     printf("%d",k);
}