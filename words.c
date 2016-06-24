#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[5][100];
int b[10];
int i,l,l1,count=0;
printf("\n enter the character ");
for(i=0;i<5;i++)
{
scanf("%s",&a[i]);
l=strlen(a[i]);
b[i]=l;
}
printf("\n the length of the string are");
for(i=0;i<5;i++)
{
printf("%d\t",b[i]);
}
printf("\n enter the length of the string to be determined");
scanf("%d",&l1);
i=0;
while(i<5)
{
if(b[i]==l1)
count++;
i++;
}
printf("\n the total number of times the string of length %d present is %d",l1,count);
getch();
}
