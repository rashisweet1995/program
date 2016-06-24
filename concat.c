#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[10];
int l1,l2,i;
clrscr();
printf("\n enter the main string");
gets(a);
l1=strlen(a);
printf("\n enter the string to be addes to main string");
gets(b);
l2=strlen(b);

for(i=0;i<l2;i++)
{
a[l1]=b[i];
l1++;
}
printf("\n the new string is %s",a);
getch();
}
