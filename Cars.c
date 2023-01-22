#include<stdio.h>
void fun(int n)
{
    if(n%4==0)
   {
       printf("%d",n/4);
   }
   else
   {
       printf("%d",n/4+1);
   }
}
int main()
{
   int n;
   scanf("%d",&n);
   fun(n);
}