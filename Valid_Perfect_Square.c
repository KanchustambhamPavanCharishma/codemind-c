#include<stdio.h>
int main()
{ 
int i,n,c,j; 
scanf("%d",&n);
 int a[n]; 
for(i=0;i<n;i++) 
{ 
scanf("%d",&a[i]);
 } 
for(i=0;i<n;i++)
 { 
c=0; 
for(j=1;j<a[i];j++) 
{
 if(j*j==a[i]) 
{ 
c++; 
} 
} 
if(c==1)
 {
 printf("True");
 } 
else
 { 
printf("False");
 }
 printf("
");
 }
}