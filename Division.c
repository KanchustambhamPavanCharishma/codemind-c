#include<stdio.h>
int fun(int a,int b)
{
    int c;
    c=a/b;
     return c;
}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
   int k= fun(a,b);
    printf("%d",k);
}