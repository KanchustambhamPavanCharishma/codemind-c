#include<stdio.h>
float fun(float a,float b)
{
    float c;
    c=a*b;
    return c;
}
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
   float k= fun(a,b);
   printf("%0.2f",k);
}