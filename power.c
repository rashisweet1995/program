#include<stdio.h>
#include<conio.h>
#include<math.h>
void check(int z)
{
if((log(z)/log(2))-(int)(log(z)/log(2)) ==0)
printf("\n the number %d is a power of 2",z);
else
printf("\n the number %d is not a power of 2",z);
}
void main()
{ int n;
printf("\n enter n ");
scanf("%d",&n);
check(n);
getch();
}
