#include<stdio.h>
#include<conio.h>
void main()
{ int t,a,b;
printf("\n enter the two variables ");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\n the new value of a is %d and b is %d",a,b);
getch();
}
