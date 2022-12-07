#include<stdio.h>
void fun(float f)
{
    float c;
    c=((f-32)*5)/9;
    printf("%0.2f",c);
}
int main()
{
    float f,c;
    scanf("%f",&f);
    fun(f);
}