#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    int a,b;
    int i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
    }
return 0;
}
