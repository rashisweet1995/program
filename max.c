#include<stdio.h>
#include<conio.h>
void main()
{
int a[]={19,17,12},max,min,i,n,sum;
n=sizeof(a)/sizeof(a[0]);
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
else if(a[i]<min)
{
min=a[i];
}
}
sum=max+min;
printf("\n the sum of the max and minimum elements are %d",sum);
getch();
}
