#include <stdio.h>
#include<conio.h>
int prince(int array[50],int n);
int main(void) 
{
	int array[50];
	int i,result,n;
  clrscr();
	printf("no of elements in the array");
	scanf("%d",&n);
	printf("\narray\n");
	for(i=0;i<n;i++)
{ 
	scanf("%d",&array[i]);
	printf("%d ",array[i]);
}
	result=prince(array,n);
	printf("\n%d",result);
	return 0;
}
int prince(int array[50],int n)
{
	int i,prince=array[0];
	for(i=1;i<n;i++)
{
	scanf("%d",&array[i]);
	if(array[i]<prince)
{
		prince=array[i];
}
}
  getch();
	return (prince);
}	
 
