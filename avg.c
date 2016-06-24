#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[10],sum=0;
float avg;
printf("\n enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/n;
printf("the avg is%f",avg);
getch();
}
