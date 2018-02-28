#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,sum=0,p,i;
clrscr();
scanf("%d",&n);
p=n;
for(i=0;n>0;i++)
{
m=n%10;
sum=(sum*10)+m;
n=n/10;
}
printf("%d",sum);
getch();
return 0;
}
