#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,h;
    cin>>a>>b>>h;
    float c;
    c=((a+b)*0.5)*h;
    cout<<fixed<<setprecision(4)<<c;
}